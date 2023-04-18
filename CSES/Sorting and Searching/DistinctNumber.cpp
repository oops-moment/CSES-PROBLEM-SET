#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long int ll;

int main()
{
  ll N;
  cin>>N;
  vector<ll>vec(N);
  map<ll,ll>mp;
  ll count=0;
  for(ll i=0;i<N;i++)
  {
    cin>>vec[i];
    if(mp[vec[i]]!=-1)
    {
        count++;
        mp[vec[i]]=-1;
    }
  
  }
  cout<<count<<"\n";
}