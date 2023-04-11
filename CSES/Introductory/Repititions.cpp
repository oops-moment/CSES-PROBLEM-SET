#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long ll;

int main()
{   
    // we are given a string and we need to tell the longest repreating length in sequence
    string S;
    cin>>S;
    ll count=1;
    ll max_count=1;
    for(ll i=1;i<S.size();i++)
    {
        if(S[i]==S[i-1])
        {   
         count++;
            
        }
        else
      {  max_count=max(count,max_count);
        count=1;}
    }
     max_count=max(count,max_count);
    cout<<max_count<<"\n";
    return 0;
}