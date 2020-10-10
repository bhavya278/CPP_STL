#include<iostream>
#include<list>
using namespace std;
int main()
{
    //list of create a graph data structure
    list<pair<int,int>> *l;
    int n;//no. of vertices
    cin>>n;
    l=new list<pair<int,int>>[n];

    int e;//no. of edges
    for(int i=0;i<e;i++)
    {
        int x,y,wt;
        cin>>x>>y>>wt;

        l[x].push_back(make_pair(y,wt));
        l[y].push_back(make_pair(x,wt));
    }

    //print the linkd list
    for(int i=0;i<n;i++){
        //print every linked list
        cout<<"Linked List"<<i<<"->";
        for (auto xp:l[i])
        {
            cout<<"("<<xp.first<<","<<xp.second<<"),";
        }
        cout<<endl;
        
    }
    return 0;
}