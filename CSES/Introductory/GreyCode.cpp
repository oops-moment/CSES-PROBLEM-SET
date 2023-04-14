// basically given a number n you need to out put the grey code 
// 1 : 0, 1
// 2 : 00,10, 11,01 .. in the original order of past grey code you append 0 in the other case you apeend 1
// 3 : 000,100,110,010, 011,111,101,001 // so basically that's all

#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using ull = unsigned long long;
#define ff first
#define ss second
#define modnum 1000000007
// hello
vector<string> gray(int n)
{
    vector<string> res;

    if(n==1)
    {
        res.push_back("0");
        res.push_back("1");
        return res;
    }

    vector<string> pres=gray(n-1);
    int s=pres.size();
    
    for(int i=0;i<s;i++)
        res.push_back("0"+pres[i]);

    for(int i=s-1;i>=0;i--)
        res.push_back("1"+pres[i]);

    return res;
}

int main()
{ 
    ios_base::sync_with_stdio(false);
    
    int n;
    cin>>n;

    vector<string> ans=gray(n);

    for(auto x:ans)
        cout<<x<<endl;

    return 0;
}