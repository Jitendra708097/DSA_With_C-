#include<iostream>
using namespace std;

int Partition(int arr[],int start,int end)
{
    int pos = start;
    while(start<=end)
    {
        if(arr[start]<=arr[end])
        {
            swap(arr[pos],arr[start]);
            pos++,start++;
        }
        else
        {
            start++;
        }
    }

    return pos-1;
}

void QuickSort(int arr[],int start,int end)
{
    if(start>=end)
    return ;

    int pivot = Partition(arr,start,end);  // it returns the position of pivot element
    // cout<<"pivot "<<pivot<<endl;
    QuickSort(arr,start,pivot-1);  // it solve left portion of array
    // cout<<"pivot "<<pivot<<" start "<<start<<endl;
    QuickSort(arr,pivot+1,end);  // it solve right portion of array
    // cout<<"pivot "<<pivot<<" end "<<end<<endl;
}
int main()
{
    // int arr[] = {9,3,2,4,6,2,10,8,3,1,6};
    int arr[] = {1,2,3,4,5,6,7,8,9,10,11};

    cout<<"Print array before sorted"<<endl;
    for(int i=0;i<11;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    QuickSort(arr,0,10);  // recursion call

    cout<<"Print array after sorted"<<endl;
    for(int i=0;i<11;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}