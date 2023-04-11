#include <iostream>
#include <bits/stdc++.h>
typedef unsigned long long ll;
using namespace std;
int main()
{   
    ll N;
    cin>>N;
    ll sum=(N)*(N+1)/2;
    ll temp_sum=0;
    for(ll i=0;i<N-1;i++)
    {
    ll a;
    cin>>a;
     temp_sum +=   a;
    }
    cout<<sum-temp_sum<<"\n";
    
    return 0;
}