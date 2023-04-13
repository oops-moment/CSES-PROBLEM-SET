#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long ll;
int main()
{
    ll N;
    cin >> N;
    ll sum = (N) * (N + 1) / 2;
    if (sum % 2 == 0)
    {
        vector<ll> v;  // this will store one part of subset
        vector<ll> v2; // this will store second part of subset
        ll f_sum = sum / 2;
        for (ll i = N; i >= 1; i--)
        {
            if (i <= f_sum)
            {
                f_sum -= i;
                v.push_back(i);
            }
            else
            {
                v2.push_back(i);
            }
        }
        cout << v.size() << "\n";
        for (ll i = 0; i < v.size(); i++)
        {
            cout << v[i] << " ";
        }
        cout << "\n";
        cout << v2.size() << "\n";
        for (ll i = 0; i < v2.size(); i++)
        {
            cout << v2[i] << " ";
        }
        cout << "\n";
    }
    else
    {
        cout << "NO\n";
        return 0;
    }
    return 0;
}