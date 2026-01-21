// unordered_map is also known as hash map.
// it stores values in the form of key:value in same order as given.
// implementation of unordered_map by hashing.
#include<iostream>
#include<unordered_map>
using namespace std;
int main()
{
    // create hash map 
    unordered_map<string, int> inventory;

    // insertion into hash map 

    inventory["milk"] = 33;
    inventory["rice"] = 50;
    inventory["potato"] = 20;

    // access elements from hash map.
    cout<<"milk price: "<<inventory["milk"]<<endl;

    // check key present or not.
    // inventory.count(key). it returns 1 if key is present 0 otherwise.
    cout<<inventory.count("milk")<<endl; // 1
    cout<<inventory.count("tomato")<<endl; // 0

    for(auto it = inventory.begin();it != inventory.end(); it++)
    {
        cout<<"Keys: "<<it->first;
        cout<<" Values: "<<it->second<<endl;
    }


}