#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long ll;
int main()
{
    //  Basically we are given the string n we need to reshuffle to make it palindrome
    string S;
    cin >> S;
    //   basically let take the frequency aarha
    map<char,int>freq;
     for (ll i = 0; i < S.size(); i++)
    {
        freq[S[i]]=0; // freq of each character
    }
    for (ll i = 0; i < S.size(); i++)
    {
        freq[S[i]]++; // freq of each character
    }
    int flag = 0;
    int final = 0;

    // basically odd mei 1 and even mei double
    sort(S.begin(),S.end());
    for (int i = 0; i < S.size(); i++)
    {   
        if(i!=0 && S[i]==S[i-1])
        {
            continue;
        }
        if (freq[S[i]] % 2 == 1)
        {
            if (flag == 0)
            {
                flag = 1;
            }
            else
            {
                final = 1;
                cout << "NO SOLUTION";
                return 0;
            }
        }
    }
    // now in the case where there is solution we will check if the flag is 1 and final is 0 basically one odd ter
    vector<char> finals(S.size());
    ll count = 0;
    if (flag == 1 && final == 0)
    {

        for (ll i = 0; i < S.size(); i++)
        {
            if (freq[S[i]] % 2 == 0)
            {
                while (freq[S[i] ])
                {
                    finals[count] = S[i];
                    finals[S.size() - count - 1] = S[i];
                    count++;
                    freq[S[i] ] -= 2;
                }
            }
            else
            {
                finals[S.size() / 2] = S[i];
                freq[S[i] ] -= 1;
                while (freq[S[i]])
                {
                    finals[count] = S[i];
                    finals[S.size() - count - 1] = S[i];
                    count++;
                    freq[S[i]] -= 2;
                }
            }
        }
    }
    else
    {
        for (ll i = 0; i < S.size(); i++)
        {

            while (freq[S[i] ])
            {
                finals[count] = S[i];
                finals[S.size() - count - 1] = S[i];
                count++;
                freq[S[i]] -= 2;
            }
        }
    }
    // here we then print the finals;
    for (ll i = 0; i < finals.size(); i++)
    {
        cout << finals[i];
    }
    cout << "\n";
    return 0;
}