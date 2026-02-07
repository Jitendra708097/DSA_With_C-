// undirected unweighted graph
// show in adjancy matrix
#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int vertex,edge;
    cout<<"Enter the size of vertex : ";
    cin>>vertex;
    cout<<"Enter the size edges : ";
    cin>>edge;
    vector<int>arr[vertex];
    int u ,v;
    for(int i=0;i<edge;i++)
    {
        cout<<"Enter the nodes in between edges is happened : ";
        cin>>u>>v;
        arr[u].push_back(v);
        arr[v].push_back(u);
    }

    for(int i=0;i<vertex;i++)
    {
        cout<<i<<" - > ";
        for(int j=0;j<arr[i].size();j++)
        {
            cout<<arr[i][j]<<" ";
        }

        cout<<endl;
    }
 }