// Print Kth character.
#include<iostream>
#include<set>
using namespace std;
int main()
{
    string S = "banana";
    set<string> st;
    string s;
    for (int i = 0; i < S.length(); i++)
    {
        s = "";
        for (int j = i; j < S.length(); j++)
        {
            s += S[j];
            st.insert(s);
        }
    }

    for(auto i = st.begin(); i != st.end(); i++)
    {
           cout<<*i<<endl;
    }

    s = "";
    for (auto it = st.begin(); it != st.end(); it++)
    {
        s = s + (*it);
    }

    cout<<s;
}