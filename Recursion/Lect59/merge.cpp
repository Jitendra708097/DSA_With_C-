#include<iostream>
#include<vector>
using namespace std;

void Merge(int arr[],int start,int mid,int end)
{
    vector<int>temp(end-start+1);
    int left = start,right = mid+1,index = 0;
    while(left<=mid && right<=end)
    {
        if(arr[left]<arr[right])
        {
            temp[index] = arr[left];
            index++,left++;
        }
        else
        {
            temp[index] = arr[right];
            index++,right++;
        }
    }

    // for remain element in left array 
    while(left<=mid)
    {
        temp[index] = arr[left];
        index++,left++;
    }

    // for remain element in right portion of array 
    while(right<=end)
    {
        temp[index] = arr[right];
        index++,right++;
    }

    // copy all elements in original array from temp array 
    index = 0;
    while(start<=end)
    {
        arr[start] = temp[index];
        start++,index++;
    }
}

void MergeSort(int arr[],int start,int end)
{
    if(start == end)
    return;

    int mid = (start+end)/2;

    // for left portion of array
    // cout<<"left "<<start<<" mid "<<mid<<endl; 
    MergeSort(arr,start,mid);
    // for right portion of array 
    // cout<<"right "<<mid+1<<" end "<<end<<endl;
    MergeSort(arr,mid+1,end);

    // after that merge two sorted array 
    // cout<<"start "<<start<<" mid "<<mid<<" end "<<end<<endl;
    Merge(arr,start,mid,end);
}

int main()
{
    int arr[10] = {9,5,3,1,6,7,2,4,10,8};
    for(int i=0;i<10;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    MergeSort(arr,0,9);
     cout<<endl;
    // Sorted array 
    for(int i=0;i<10;i++)
    {
        cout<<arr[i]<<" ";
    }
}