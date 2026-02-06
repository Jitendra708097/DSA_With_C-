// Steal maximum rupees from houses but 
// you steal rupee from two adjacent house and houses 
// are in cicular form
#include <iostream>
#include <vector>
using namespace std;

int maxAmount(int n, vector<int>&arr)
{
    // Base Cases
    if (n == 0)
        return arr[n];

    if (n < 0)
        return 0;

    // General Cases
    int amount = max(arr[n] + maxAmount(n - 2, arr), maxAmount(n - 1, arr));
    return amount;
}

int maxStealAmount(int n, int arr[], vector<int> &dp)
{
    // Base Cases
    if (n == 0)
        return arr[n];

    if (n == 1)
        return max(arr[1], arr[0]);

    if (dp[n] != -1)
        return dp[n];

    // General Cases
    dp[n] = max(arr[n] + maxStealAmount(n - 2, arr,dp), maxStealAmount(n - 1, arr,dp));
    return dp[n];
}

int main()
{
    int arr[7] = {7, 3, 2, 8, 2, 1,10};
    int n = 7;

    vector<int>first(n-1,0);
    vector<int>second(n-1,0);

    // to fill array 
    for(int i=0;i<n-1;i++)
    {
        first[i] = arr[i];
    }

    // to second array 
    for(int i=1;i<n;i++)
    {
        second[i-1] = arr[i];
    }


    int result1 = maxAmount(n-2,first);  //Recrusive approach
    int result2 = maxAmount(n-2,second);

    cout<<"Max Amount steals: "<<max(result1,result2);

    // DP
    // vector<int>dp(n,-1);
    // int result = maxStealAmount(n-1,arr,dp);

    // Tabulation Bottom up approach
    // vector<int>dp(n,0);
    // dp[0] = arr[0];
    // dp[1] = max(arr[0],arr[1]);

    // space optimization
    // int prev = max(arr[0], arr[1]);
    // int prev1 = max(arr[0],arr[n-1]);
    // int curr;

    // for (int i = 2; i < n-1; i++)
    // {
    //     curr = max(arr[i] + prev1, prev);
    //     prev1 = prev;
    //     prev = curr;
    // }

    // int result = curr;

    // cout << "Maximum amount steal from houses: " << result;
}