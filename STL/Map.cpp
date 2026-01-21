//  A map is a container of pairs of value
//  map<string,int>m;       string =name   , int conatins occurence of string
// it stores value in the form of key:value and keys stores in the sorted order.
#include<iostream>
#include<bits/stdc++.h>
#include<map>
using namespace std;
int main()
{
    //    map<string,int>mp = {{"jitendra",1},{"kanhaiya",1},{"yes",1},{"ram",1}};

    // //    print all keys and values of map.
    // for(auto it = mp.begin();it != mp.end();it++)
    // {
    //        cout<<it->first<<" "<<it->second<<endl;
    // }

    // mp["jitendra"]++;
    // // cout<<mp.count("jitendra")<<endl;  it check weather values is present or not return 1 if present otherwise 0.
    // cout<<mp["jitendra"]<<endl;   // access value of this key.

    // cout<<mp.erase("jitendra")<<endl;  // it removes the key and value from the map.
    // cout<<mp.count("jitendra"); // it returns 0.


    map<int,int>mp;
     for(int i=0;i<10;i++)
     {
        mp[i]++;
     }

    //  it prints all the keys in ascending order because map stores keys in ascending order.
     for(auto it = mp.begin();it != mp.end();it++)
     {
        cout<<it->first<<" "<<it->second<<endl;
     }

    //  Now Descending order.
    cout<<"Keys in descending order: "<<endl;
    for(auto it = mp.rbegin(); it != mp.rend(); it++)
    {
        cout<<it->first<<" "<<it->second<<endl;
    }
}