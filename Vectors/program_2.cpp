#include<iostream>
#include<vector>
using namespace std;
int main()
{
    //you can create and initialize a vector

    vector<int> d{1,2,3,10,14};
    //Push Back O(1) for most of the time
    d.push_back(16);

    //Pop Back /Remove the last element O(1)
    d.pop_back();

    //Insert some element in the middle O(n)
    d.insert(d.begin()+3,4,100);

    //erase some element in the middle

    d.erase(d.begin()+2); 
    d.erase(d.begin()+2,d.begin()+5);


    //size
    cout<<d.size()<<endl;
    cout<<d.capacity()<<endl;

    //we avoid the shrink
    d.resize(18); //if the size is increasing then more memory will be allocated


    cout<<d.capacity()<<endl;

    //remove all elements of the vector,doesnot delete the memory occupied by the array


    //empty
    if(d.empty()){
        cout<<d.size()<<endl;
    }

    d.clear();
    cout<<d.size()<<endl;


    for(int x:d){
        cout<<x<<",";
    }
    cout<<endl;
    d.push_back(10);
    d.push_back(1);
    d.push_back(1);
    cout<<d.front()<<endl;
    cout<<d.back()<<endl;


    //reserve
    int n;
    cin>>n;
    vector <int> v;

    // to avoid doubling we will use reserve function 
    v.reserve(1000);
    for(int i=0;i<n;i++){
        int no;
        cin>>no;
        v.push_back(no);
        cout<<"changing Capacity "<<v.capacity()<<endl;

    }
    cout<<"Capacity "<<v.capacity()<<endl;
    for(int  x:v){
        cout<<x<<",";
    }


    return 0;
}