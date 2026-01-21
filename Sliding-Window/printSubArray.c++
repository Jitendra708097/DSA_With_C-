// #include<iostream>
// using namespace std;
// int main()
// {
//     int arr[] = {1,2,3,4,5,6,7,8,9};
//     int s = 10;
//     // print subArrays of this array 
//     for(int i=0;i<s;i++)
//     {
//         // cout<<i+1<<" sub array ";
//         for(int j=i;j<s;j++)
//         {
//             for(int k=i;k<=j;k++)
//             {
//                 cout<<arr[k]<<" ";
//             }
//             cout<<endl;
//         }
//     }
// }


// print all subArrays of this array using two pointer for O(n^2) time complexity.

#include<iostream>
using namespace std;
int main()
{
    int arr[] = {1,2,3,4,5};
    int first=0,second=0;

    while(first<5);
    {
        int index=0;
        while(index<5 && second<=index)
        {
            cout<<arr[second]<<" ";
            second++;
            index++;
        }
        second = 0;
        cout<<endl;
    }
}