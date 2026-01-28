// suffix sum of an array using kadane's algorithm.

#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the size of an array: ";
    cin>>n;

    vector<int>arr(n);
    
    // take input from user.
    for(int i=0;i<n;i++)
    {
        cout<<"Enter the "<<i+1<<" element: ";
        cin>>arr[i];
    }

    // suffix sum of an array.
    int suffixSum = 0;
    cout<<"Suffix sum of an array: ";
    for(int i = n-1;i>=0;i--)
    {
         suffixSum+=arr[i];
         cout<<suffixSum<<" ";
    }

    return 0;
}