//STACK(LIFO_>last in first out)
#include<iostream>
#include<stack>
using namespace std;
int main()
{
    stack<int> s;
    for(int i=0;i<=5;i++){
        s.push(i);
    }
    while(!s.empty()){
        //complexity->O(1)
        cout<<s.top()<<",";
        s.pop();
    }

    return 0;
}