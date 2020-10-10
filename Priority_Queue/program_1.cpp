#include<iostream>
#include<queue>
using namespace std;
int main()
{
    priority_queue<int> pq;
    //By Default priority queue is depend on max_heap so output come in decending order
    //Max Priority Queue
    int n;
    cin>>n;
    for(int i=1;i<n;i++){
        int no;
        cin>>no;
        pq.push(no);  //O(LogN)
        //Remove the elements from the heap
        while(!pq.empty()){
            cout<<pq.top()<<" ";
            pq.pop();
        }
    }
    return 0;
}
