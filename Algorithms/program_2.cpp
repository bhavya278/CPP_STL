#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int arr[]={20,30,40,40,40,50,100,1100};
    int n=sizeof(arr)/sizeof(int);
    //Search in the sorted array

    int key;
    cin>>key;

    bool present = binary_search(arr,arr+n,key);
    if(present){ 
        cout<<"Present";
    }
    else{
        cout<<"Absent";
    }

    //two more things
    //get the index of te element
    //lower_bound(s,e,key) and upper_bound(s,e,key)    s->start e->end key->key //return address

    auto lb=lower_bound(arr,arr+n,key);
    cout<<endl<<"Lower bound of"<<key<<" "<<(lb-arr)<<endl;

    auto ub=upper_bound(arr,arr+n,key);
    cout<<endl<<"Upper bound of 40 is "<<(ub-arr)<<endl;

    cout<<"frequency of 40 is "<<(ub-lb);
    return 0;
}