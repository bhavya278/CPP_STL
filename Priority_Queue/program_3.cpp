//(Function Object) or (Functor)

#include<iostream>
#include<cstring>
using namespace std;

class Fun{
    public:
        void operator()(string s){
            cout<<"Having Fun With "<<s;
        }
};



int main()
{
    Fun f;//constructor call;
    f("C++");//Overloaded() Operator=Function Call where f is an object
    //Functor or Function Object

    return 0;
}