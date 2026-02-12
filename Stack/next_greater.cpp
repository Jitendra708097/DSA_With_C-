// Find the next greater element of current in right side.
// if not exist then return -1;

// Brute force
#include<iostream>
#include<vector>
#include<stack>
int main()
{
    int arr[10] = {6,2,4,6,8,1,2,9,10,11};
    // std::vector<int>ans(10,-1);

    // Brute force approach
    // for(int i=0;i<10-1;i++)
    // {
    //     for(int j=i+1;j<10;j++)
    //     {
    //         if(arr[i]<arr[j])
    //         {
    //             ans[i] = arr[j];
    //             break;
    //         }
    //     }
    // }

    // optimize approach using stack
    std::stack<int>st;
    std::vector<int>ans(10, -1);

    for(int i=0;i<10;i++)
    {
        while(!st.empty() && arr[i]>arr[st.top()])
        {
            ans[st.top()] = arr[i];
            st.pop();
        }
        st.push(i);
    }

    // print the resultant array 
    for(int i=0;i<10;i++)
    {
       std::cout<<ans[i]<<" ";
    }
}