#include<iostream>
#include<vector>
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


template<class ForwardIterator,class T,class Compare>
ForwardIterator search(ForwardIterator start,ForwardIterator end,T key,Compare cmp){
    while (start!=end)
    {
        if(cmp(*start,key)){
            return start;
        }
        start ++;
    }
    return end;
    
}
class Book
{
public:
    string name;
    int price;
    Book()
    {
    }
    Book(string name, int price)
    {
        this->name = name;
        this->price = price;
    }
};
 
class BookCompare{
    public:
        bool operator()(Book A,Book B){
            if(A.name==B.name){
                return true;
            }
            return false;
        }
};
int main()
{
   
    Book b1("C++", 100);
    Book b2("python", 120);
    Book b3("java", 130);

    vector<Book> l;
    l.push_back(b1);
    l.push_back(b2);
    l.push_back(b3);

    Book booktofind("C",110);
    BookCompare cmp;

    auto it=search(l.begin(),l.end(),booktofind,cmp);
    if(it!=l.end()){
        cout<<"Book found in the library";
    }
    else{
        cout<<"Not found";
    }
    return 0;
}