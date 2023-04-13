// IN this question we need to find the number of trailing zeroes in a question
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long ll;
int main()
{

    ll N;
    cin >> N;
   
     ll count_zero=0; // basically we need to count the factors of 5
     ll i=5;
     while(N>=i)
     {  
        count_zero+=N/i;
        i*=5;
     }
    cout << count_zero << "\n";
    return 0;
}