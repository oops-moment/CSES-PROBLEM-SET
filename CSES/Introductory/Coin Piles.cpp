#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long ll;
// EXPLAINATION : Given you have two pile A nd B alright now say there are x operations such that 
// 1 is taken from first pile and 2 are taken from second pile , where as say there are are y operations
// such that x+2y=a and y+2x is b , solving you will get x and y , then you check if they empty array lol xp
// note that twon equaltion are solved using system of linear equations ok
int main()
{
    ll T;
    cin >> T;
    while (T--)
    {
        ll A, B;
        cin >> A >> B;

        ll x, y; // these will determine if the task of emptying both piles can be acheived
        x = (2 * B - A) / 3;
        y = (2 * A - B) / 3;
        if (x+2*y==A && y+2*x==B )
        {
            cout << "YES\n";
        }
        else
        {
            cout << "NO\n";
        }
    }
    return 0;
}