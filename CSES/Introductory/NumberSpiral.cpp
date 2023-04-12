#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long int ll;
int main()
{
    ll N;
    cin >> N;
    for (ll i = 0; i < N; i++)
    {
        ll x, y;
        cin >> x >> y;
        if (y > x)
        {
            if (y % 2 == 1)
            {
                cout << (y) * (y) - (x - 1);
                cout<<"\n";
                continue;
            }
            else
            {
                cout << (y - 1) * (y - 1) + x;
                                cout<<"\n";

                continue;
            }
        }
        else
        {
            if (x % 2 == 1)
            {
                cout << (x - 1) * ((x - 1)) + y;                cout<<"\n";

                continue;
            }
            else
            {
                cout << x * x - (y - 1);
                                cout<<"\n";

                continue;
            }
        }
    }

    return 0;
}