#include<iostream>
#include<string>
using namespace std;
int main()
{
    //Different Ways to define String 
    string s0;
    string s1("Hello");
    
    string s2="Hello World";
    string s3(s2);//copy constructor

    string s4=s3;

    char a[]={'a','b','c','\0'};
    string s5(a);//create s4 as a object of character array a

    cout<<s0<<endl;
    cout<<s1<<endl;
    cout<<s2<<endl;
    cout<<s3<<endl;
    cout<<s4<<endl;
    cout<<s5<<endl;

    if(s0.empty()){
        cout<<"s0 is an empty string"<<endl;
    }

    //append
    s0.append("I love c++");
    cout<<s0<<endl;
    s0=s0+"and python";
    cout<<s0<<endl;

    //remove
    cout<<s0.length()<<endl;
    s0.clear();
    cout<<s0.length()<<endl;

    //compare two string
    s0="Apple";
    s1="Mango";
    cout<<s0.compare(s1)<<endl;//returns integer ==0 equal,> 0 or < 0
    cout<<s1.compare(s0)<<endl;
    cout<<s1.compare(s1)<<endl;
    
    
    //overloaded Operators
    cout<<(s0<s1)<<endl;
    cout<<(s1>s0)<<endl;

    if(s1>s0){
        cout<<"Mango is lexi greater than apple"<<endl;
    }


    cout<<s1[0]<<endl;

    //find substrings
    string s="I want to have apple juice";
    int idx=s.find("apple");
    cout<<idx<<endl;

    //Remove a word from string
    string word="apple";
    int len=word.length();
    cout<<s<<endl;
    s.erase(idx,len+1);
    cout<<s<<endl;

    //iterate over all the characters in the string
    for(int i=0;i<s1.length();i++){
        cout<<s1[i]<<":";
    }
    cout<<endl;
    for(string::iterator it=s1.begin();it!=s1.end();it++){
        cout<<(*it)<<",";//it is a pointer
    }
    cout<<endl;
    //for each loop
    for(char c:s1){
        cout<<c<<".";
    }
    return 0;
}