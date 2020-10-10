#include <iostream>
#include <queue>
#include<vector>
using namespace std;
int main()
{
    priority_queue<int,vector<int>,greater<int>> pq;
    //By using greater we can reverse so now  priority queue is depend on mix_heap so output come in ascending order

    //Min Priority Queue
    int n;
    cin >> n;
    for (int i = 1; i < n; i++)
    {
        int no;
        cin >> no;
        pq.push(no); //O(LogN)
        //Remove the elements from the heap
        while (!pq.empty())
        {
            cout << pq.top() << " ";
            pq.pop();
        }
    }
    return 0;
}
