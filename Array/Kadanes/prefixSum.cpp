// Prefix sum of an array.
#include<iostream>
#include<vector>
using namespace std;
int main()
{
    cout<<"Enter the size of an array: ";
    int n;
    cin>>n;
    vector<int>v(n);
    
    cout<<"Enter the array elements: ";
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }

    // to calculate prefix of an array.
    vector<int>prefixSum(n);
    prefixSum[0] = v[0];
    for(int i=1;i<n;i++)
    {
       prefixSum[i] = prefixSum[i-1] + v[i];
    }

    // 1 2 3 4 5
    // print prefix sum from array.
    for(int i=0;i<n;i++)
    {
        cout<<prefixSum[i]<<" ";
    }
}