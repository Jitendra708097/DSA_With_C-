// find the minimum cost climbing stairs .
#include<iostream>
#include<vector>
using namespace std;

int minimum_cost(int n,int arr[])
{
    if(n<=1)
    return 0;

   int cost = min(arr[n-1]+minimum_cost(n-1,arr) , arr[n-2]+minimum_cost(n-2,arr));
   return cost;
}

// DP 
int minimum_cost(int n, int arr[],vector<int>&dp)
{
    if (n <= 1)
        return 0;

    if(dp[n] != -1)
    return dp[n];

    dp[n] = min(arr[n - 1] + minimum_cost(n - 1, arr,dp), arr[n - 2] + minimum_cost(n - 2, arr,dp));
    return dp[n];
}

int main()
{
    int arr[4] = {10,15,20,10};
    int n = 4;
    vector<int>dp(n+1,-1);

    int result = minimum_cost(n,arr,dp);
    cout<<"Minimum climbing cost: "<<result;
}