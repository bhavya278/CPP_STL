#include<iostream>
#include<list>
using namespace std;
template<typename T>
int search(T arr[],int n,T key)
{
    for(int p=0;p<n;p++)
    {
        if(arr[p]==key){
            return p;
        }
    }
    return n;
}
template<class ForwardIterator,class T>
ForwardIterator search(ForwardIterator start,ForwardIterator end,T key){
    while (start!=end)
    {
        if(*start==key){
            return start;
        }
        start ++;
    }
    return end;
    
}
int main()
{
    list<int> l;
    l.push_back(1);
    l.push_back(2);
    l.push_back(5);
    l.push_back(3);
    auto it=search(l.begin(),l.end(),5);
    if(it==l.end())
    {
     cout<<"element not present";   
    }
    else{
        cout<<"found"<<endl;
        cout<<*it<<endl;

    }


    return 0;
}