#include<iostream>
using namespace std;
int main()
{
    string str = "jitendra";

    // print all sub strings from this string. 
    for(int i=0;i<8;i++)
    {
        for(int j=i;j<8;j++)
        {
            cout<<j+1<<" sub string ";
            for(int k=i;k<=j;k++)
            {
                cout<<str[k]<<" ";
            }
            cout<<endl;
        }
        cout<<endl;
    }
}