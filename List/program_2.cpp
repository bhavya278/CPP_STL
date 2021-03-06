#include <iostream>
#include <list>
using namespace std;
int main()
{

    //list=>Doubly linked list
    list<int> l;
    list<int>{1, 2, 3, 10, 8, 5};
    list<string> l2{"apple", "guava", "mango", "banana"};
    l2.push_back("pineapple");
    //sort
    l2.sort();

    //reverse
    l2.reverse();

    //pop_front
    cout << l2.front() << endl;
    l2.pop_front();

    //add to the front the list
    l2.push_front("kiwi");
    cout << l2.back() << endl;
    l2.pop_back();

    //Iterate over the list and print the data

    for (auto it = l2.begin(); it != l2.end(); it++)
    {
        cout << (*it) << "->";
    }
    cout << endl;
    for (string s : l2)
    {
        cout << s << "-->";
    }


    //some more functions in the list 

    l2.push_back("orange");
    l2.push_back("guava");

    for (string s : l2)
    {
        cout << s << "-->";
    }
    cout<<endl;

    //remove a fruit

    // string f;
    // cin>>f;
    // l2.remove(f);
    for (string s : l2)
    {
        cout << s << "-->";
    }
    cout<<endl;
    //erase one or more element

    auto it=l2.begin() ;
    it++;
    it++;
    l2.erase(it);
    for (string s : l2)
    {
        cout << s << "-->";
    }

    //we can insert element in the list
    it=l2.begin();
    it++;
    l2.insert(it,"fruitjuice");
    for (string s : l2)
    {
        cout << s << "-->";
    }

    return 0;
}

