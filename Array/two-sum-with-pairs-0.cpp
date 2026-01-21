#include<iostream>
#include<vector>
using namespace std;
int main() 
{
    int arr[14] = {5,7,4,0,2,8,9,-1,-4,-3,-6,8,4,-9};
    vector<vector<int>> ans;
    vector<int>temp;
    int start=0,end=14-1;
    while(start<end) 
    {
        if(arr[start]+arr[end] == 0)
        {
            temp.push_back(arr[start]);
            temp.push_back(arr[end]);
            ans.push_back(temp);
            temp.clear();
        }
        else if(arr[start]+arr[end]<0)
        {
            start++;
        }
        else 
        {
            end--;
        }
    }
    sort(ans.begin(),ans.end());
    auto duplicates = unique(ans.begin(),ans.end());
    ans.erase(duplicates,ans.end());
}