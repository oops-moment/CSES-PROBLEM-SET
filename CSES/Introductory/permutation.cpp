#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long int ll;
int main()
{
    ll N;
    cin >> N;
    vector<ll> v;
    // IF THE N LIES BETWEEN 1 AND 4 THERE IS NO WAY MIN DIFF 2 PERMUTATION CA BE FORMED
    if (N > 1 && N < 4)
    {
        cout << "NO SOLUTION"
             << "\n";
        return 0;
    }
    else if(N==4)
    {
        v.push_back(2);
                v.push_back(4);
                        v.push_back(1);
                                v.push_back(3);
    }
    else
    {
        // for the rest of N
        ll start = 1;
        ll count = 0;
        ll a= N/2;
        if(N%2!=0)
        {
            a++;
        }
        for (int i = 0; i < a; i++)
        {
          
            v.push_back(start);
            start+=2;
        }
        start = 2;
        for (int i = 0; i < N / 2; i++)
        {
            v.push_back(start);
            start += 2;
        }
    }
    // print the final answer onto the screen that is v
    for (ll i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
   
    cout << "\n";
    return 0;
}