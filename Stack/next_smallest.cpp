// Find the next smallest element from this array 
// if not exist then return -1

#include<iostream>
#include<vector>
#include<stack>
using namespace std;
int main()
{
    int arr[10] = {5,3,6,7,1,3,8,9,1,5};
    vector<int>ans(10,-1);

    // Brute force approach
    // for(int i=0;i<10-1;i++)
    // {
    //     for(int j=i+1;j<10;j++)
    //     {
    //         if(arr[i]>arr[j])
    //         {
    //             ans[i] = arr[j];
    //             break;
    //         }
    //     }
    // }

    // optimize approch using stack
    stack<int>st;
    for(int i=0;i<10;i++)
    {
        while(!st.empty() && arr[i]<arr[st.top()])
        {
            ans[st.top()] = arr[i];
            st.pop();
        }

        st.push(i);
    }

    // print the resultant array 
    for(int i=0;i<10;i++)
    {
        cout<<ans[i]<<" ";
    }
}