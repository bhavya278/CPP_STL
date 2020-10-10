#include<iostream>
#include<algorithm>
using namespace std;

//Define a comparator function for sort in desending order
bool compare(int a,int b){
    cout<<"Comparing "<<a<<" and "<<b<<endl;
    return a>b;
}
int main(){
    int n,key;
    cin>>n;
    int a[1000];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    sort(a,a+n,compare);//started point included and ending point excluded

    for(int i=0;i<n;i++){
        cout<<a[i]<<",";
    }
    cout<<endl;
    sort(a,a+n);
    for(int i=0;i<n;i++){
        cout<<a[i]<<",";
    }
    return 0;
}
