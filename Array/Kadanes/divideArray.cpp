// Divide array in subArray's where there sum are equal to each other.
#include<iostream>
using namespace std;
int main()
{
    int arr[] = {13,4,-2,5,8,20,-10,18};

    int totalSum = 0;
    int prefixSum = 0;

    // total sum of an array.
    for(int i=0;i<8;i++)
    {
        totalSum = totalSum + arr[i];
    }

    // check
    int index = 0;
    for(int i=0;i<8-1;i++)
    {
        prefixSum = prefixSum + arr[i];
        if(prefixSum == (totalSum - prefixSum))
        {
            cout<<"Found index at both subArray's sum are equals to each other: "<<i;
            index = i;
        }
    }
    cout<<endl;

    if (index == 0)
    {
        cout<<"Not Found: ";
        return 0;
    }
    

    // first subArray
    cout<<"First subArray: ";
    int i=0;
    while (i<=index)
    {
        cout<<arr[i]<<" ";
        i++;
    }
    cout<<endl;

    // second subArray
    cout<<"Second subArray: ";
    index = index+1;
    while(index<8)
    {
        cout<<arr[index]<<" ";
        index++;
    }
    

    return 0;
}