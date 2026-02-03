// fibnacci series is series in which find current element by the sum
// of previous two elements:

// current_element = last_element + second_last_element
// first = 0, second = 1;
// current = first + second;
// 0,1,1,2,3,5,8,13,21,34,55..........

#include<iostream>
#include<vector>
using namespace std;

// ---------------Recrusive Code----------------
// int fib(int n)
// {
//     // Base Case 
//     if(n<=1)
//     {
//         return n;
//     }

//     // general cases 
//     return fib(n-1) + fib(n-2);
// }

// ------------------Top Down Approach (Recrusion + memoization)------------------
int fib(int n,vector<int>&dp)
{
    // Base Case 
    // if(n<=1)
    // return n;

    // check overlapping result exists don't find it use them
    // it will also work as base case.
    if(dp[n] != -1)
    return dp[n];

    // general cases 
    return dp[n] = fib(n-1,dp) + fib(n-2,dp);
}

int main()
{
    int n;
    cout<<"Enter the number: ";
    cin>>n;

    // Vector which stores overlapping result also know as DP.
    // vector<int> dp(n + 1, -1);
    // dp[0] = 0, dp[1] = 1;

    // int number = fib(n,dp);
    // cout<<n<<" fibnacci number: "<<number;

    // bottom up approach (tabulation)
    // for(int i=2;i<=n;i++)
    // {
    //     dp[i] = dp[i-1] + dp[i-2];
    // }

    // print full fibnacci series which is stores in dp.
    // cout<<endl<<"print fibnacci series: ";
    // for(int i=0;i<=n;i++)
    // {
    //     cout<<dp[i]<<" ";
    // }

    // last approch space optimization
    int first = 0,second = 1;
    int nth_number;
    for(int i=2;i<=n;i++)
    {
        nth_number = first + second;
        first = second;
        second = nth_number;
    }

    cout<<"Nth fibnacci number: "<<nth_number;
    return 0;
}