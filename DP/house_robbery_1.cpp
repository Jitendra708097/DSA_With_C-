#include<iostream>
#include<vector>
using namespace std;

int maxAmount(int n,int arr[])
{
    // Base Cases 
    if(n == 0)
    return arr[n];

    if(n<0)
    return 0;

    // General Cases 
    int amount = max(arr[n] + maxAmount(n-2,arr), maxAmount(n-1,arr));
    return amount;
}

int maxStealAmount(int n, int arr[],vector<int>&dp)
{
    // Base Cases
    if (n == 0)
        return arr[n];

    if (n == 1)
        return max(arr[1],arr[0]);

    if(dp[n] != -1)
    return dp[n];

    // General Cases
    dp[n] = max(arr[n] + maxStealAmount(n - 2, arr,dp), maxStealAmount(n - 1, arr,dp));
    return dp[n];
}

int main()
{
    int arr[7] = {7,3,2,8,2,1,10};
    int n = 7;
    // int result = maxAmount(n-1,arr);  //Recrusive approach

    // DP 
    // vector<int>dp(n,-1);
    // int result = maxStealAmount(n-1,arr,dp);

    // Tabulation Bottom up approach
    // vector<int>dp(n,0);
    // dp[0] = arr[0];
    // dp[1] = max(arr[0],arr[1]);

    // space optimization
    int prev = max(arr[0],arr[1]);
    int prev1 = arr[0];
    int curr;

    for(int i=2;i<n;i++)
    {
        curr = max(arr[i]+prev1,prev);
        prev1 = prev;
        prev = curr;
    }

    int result = curr;

    cout<<"Maximum amount steal from houses: "<<result;
}