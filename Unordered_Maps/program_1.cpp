// Insertion,Erase,Find in O(1) time on average
#include <iostream>
#include <unordered_map>
#include <cstring>
// map using self balancing bst
using namespace std;
int main()
{
    unordered_map<string, int> m;
    // Insert
    m.insert(make_pair("Mango", 100));
    pair<string, int> p;
    p.first = "Apple";
    p.second = 120;

    m.insert(p);

    m["Banana"] = 20;

    // 2.Search
    string fruit;
    cin >> fruit;

    //update the price
    m[fruit] += 22;

    auto it = m.find(fruit);
    //map<string,int>::iterator it
    if (it != m.end())
    {
        cout << "price of " << fruit << " is " << m[fruit] << endl;
    }
    else
    {
        cout << "friut is not present" << endl;
    }

    //3.Erase
    m.erase(fruit);

    // another way to find a particular map
    // it stores unique keys only once
    if (m.count(fruit))
    {
        cout << "Price is " << m[fruit] << endl;
    }
    else
    {
        cout << "Couldn't find" << endl;
    }
    m["Litchi"] = 60;
    m["Pineappe"] = 80;
    //Iterate over all the key value pairs
    for (auto it = m.begin(); it != m.end(); it++)
    {
        cout << it->first << " and " << it->second << endl;
    }

    // For each loop

    for (auto p : m)
    {
        cout << p.first << " : " << p.second << endl;
    }
    return 0;
}