#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long ll;
int main()
{   
    // basically given that string we need to figure out the all possible srings possible 
    // since it just the permutation of string hence we will use the concept of permution
     string str;
     cin>>str;
     sort(str.begin(),str.end());
     vector<string>veco;
     do {
         veco.push_back(str);        
     } while(next_permutation(str.begin(),str.end()));

     // nect_permutation automartically give you the next smallest one 
     
     cout<<veco.size()<<"\n";
     for(ll i=0;i<veco.size();i++)
     {
       cout<<veco[i]<<"\n";
     }

    return 0;
}