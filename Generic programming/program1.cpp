#include<iostream>
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
int main()
{
    int a[]={1,2,3,4,10,12};
    int n=sizeof(a)/sizeof(int);
    int key=10;
    cout<<search(a,n,key)<<endl;

    float b[]={1.1,1.2,1.3};
    float k=1.2;
    cout<<search(b,3,k);

    return 0;
}