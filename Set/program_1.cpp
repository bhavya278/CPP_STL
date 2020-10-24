#include<iostream>
#include<set>
using namespace std;
int main()
{
    int  arr[]={10,20,11,9,8,11,10};
    int n=sizeof(arr)/sizeof(int);

    set<int> s;
    for(int i=0;i<n;i++){
        s.insert(arr[i]);
    }
    //erase using value
    s.erase(10);

    //erase using iterator
    auto it=s.find(11);
    s.erase(it);

    //Print all the elements
    for(set<int>::iterator it=s.begin();it!=s.end();it++){
        cout<<*(it)<<",";
    }
    return 0;
}