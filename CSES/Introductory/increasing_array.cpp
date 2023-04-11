#include <iostream>
#include <bits/stdc++.h>
typedef unsigned long long int ll;
using namespace std;
int main()
{   
    ll N;
    cin>>N;
    vector<int>vec(N);
    for(ll i=0;i<N;i++)
    {
        cin>>vec[i];
    }
    ll sum=0;
    for(ll i=1;i<N;i++)
    {
        if(vec[i]<vec[i-1])
        {
         sum+=vec[i-1]-vec[i];
           vec[i]=vec[i-1];
        }
      
    }
    cout<<sum<<"\n";

    return 0;
}