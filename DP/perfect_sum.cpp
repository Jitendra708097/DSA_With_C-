// Perfect Sum 
#include<iostream>
using namespace std;

void countSubset(int i,int n,int arr[],int &count,int target)
{
    // Base Condition 
    if(i>=n)
    return ;


    // Element not includes in subset 
    countSubset(i+1,n,arr,count,target);

    // element includes in subset
    target = target - arr[i];
    if(target == 0)
    {
        count++;
    }
    countSubset(i+1,n,arr,count,target);

}

int main()
{
    int arr[5] = {1,1,1,1,1};
    int target = 1;
    int count = 0;
    countSubset(0,5,arr,count,target);
    cout<<"Total Subsets of target sum is: "<<count;
}