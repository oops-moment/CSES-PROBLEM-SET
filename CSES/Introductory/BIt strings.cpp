// here the basic question lies how well you evaluate the power functin
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long ll;
ll mod=1e9+7;
// say 2^3 exp=2 ans=1 ans=2 2*2  4^1
ll final_power(ll base,ll exp)
{   
    ll ans=1;
    while(exp>0)
    {
        if(exp%2==0)
        {
            base=(base*base)%mod;
            exp/=2;
        }
        else
        {
            exp-=1;
            ans=(ans*base)%mod;
        }
    }
    return ans%mod;
 
}
 
int main()
{
    ll N;
    cin >> N;
    ll final_answer = final_power(2, N);
    cout << final_answer << "\n";
    return 0;
}