#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{      
    long long int N; // this store N the soze of array yo
    long long int W; // this will store the max possible weigh tpossible 
    cin>> N;
    cin>>W; 
    vector<long long>vec(N); // this for storing the weight of N students
    for(long long int i=0;i<N;i++)
    {
        cin>>vec[i];
    }
    int count=0;
    // SO in order to get the minimum number of the this gharodas we can sort the array and try tpo combine
    // most mota and light weight person in one 

    int start=0;
    int end=N-1;
    sort(vec.begin(),vec.end());
    while(start<end)
    {
        if(vec[start]+vec[end]<=W)
        {
            count+=2;
            start++;
            end--;
        }
        else
        {
            end--;
        }
    }
    // so these count people gonna merge hence using only /2 but sadly left ones gonna travel alone
    long long int left=N-count;
    long long int total=left+(count/2);
    cout<<total<<"\n";
    return 0;
}