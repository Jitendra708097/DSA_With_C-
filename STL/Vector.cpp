// vector ek tarah ka array create krta jo elements ko store krta hai
#include<iostream>
#include<vector>
using namespace std;
int main()
{
    // vector<data_type>vector_name(size_of_vector,initialize_value);
    vector<int>v(10,50);
    v.push_back(7);
    v.push_back(7);
    v.push_back(7);
    v.push_back(7);
    v.push_back(7);
    v.push_back(7);
    v.push_back(7);
    v.push_back(7);
    v.push_back(7);
    v.push_back(7);
    v.push_back(7);
    v.push_back(7);
    v.push_back(7);
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;
    cout<<" The size of vector : "<<v.size()<<endl;

}