// count all subarrays from this array whose product is less then or equals to k.

#include<iostream>
using namespace std;
int main()
{
    int arr[] = {1,2,3,4,5};
    int k = 12;
    int count=0;
    int first=0,second=0;
    int product=1;
    while(second<5)
    {
         product*=arr[second];
         if(product<=k)
         {
            count = count+(second-first+1);
            second++;
         }

        //  check if product is greater than k.
        else{
        while(product>k && first<second)
        {
           product/=arr[first];
           first++;
        }
        count = count + (second - first + 1);
        second++;
        // count++;
    }
        // count++;
    }
    cout << "Total number of subarrays: " << count;
}