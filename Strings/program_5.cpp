//compare string either laxicographic or numeric
//in laxicographic we compare one by one eg:-122<13 becoz 1<1(F) 2<3(T)
//in numerically we compare according to integer value eg:-122>13

#include <iostream>
#include <cstring>
#include <algorithm>
using namespace std;

string extractStringAtKey(string str, int key)
{
    //strtok
    char *s = strtok((char *)str.c_str(), " ");
    while (key > 1)
    {
        s = strtok(NULL, " ");
        key--;
    }
    return (string)s;
}

int convertToInt(string s)
{
    int ans = 0;
    int p = 1;
    for (int i = s.length() - 1; i >= 0; i--)
    {
        ans += ((s[i] - '0') * p);
        p = p * 10;
    }
    return ans;
}

bool numericCompare(pair<string, string> s1, pair<string, string> s2)
{
    string key1, key2;
    key1 = s1.second;
    key2 = s2.second;

    return convertToInt(key1) < convertToInt(key2);
}

bool lexioCompare(pair<string, string> s1, pair<string, string> s2)
{
    string key1, key2;
    key1 = s1.second;
    key2 = s2.second;

    return key1 < key2;
}

int main()
{
    int n;
    cin >> n;
    cin.get();

    string a[100];
    for (int i = 0; i < n; i++)
    {
        getline(cin, a[i]);
    }

    int key;
    string reversal, ordering;
    
    cin >> key >> reversal >> ordering;

    pair<string, string> strPair[100];

    for (int i = 0; i < n; i++)
    {
        strPair[i].first = a[i];
        strPair[i].second = extractStringAtKey(a[i], key);
    }

    //next =sorting

    if (ordering == "numeric")
    {
        sort(strPair, strPair + n, numericCompare);
    }
    else
    {
        sort(strPair, strPair + n, lexioCompare);
    }

    //reversal
    if (reversal == "true")
    {
        for (int i = 0; i < n / 2; i++)
        {
            swap(strPair[i], strPair[n - i - 1]);
        }
    }

    //print output
    for (int i = 0; i < n; i++)
    {
        cout << strPair[i].first << endl;
    }
    return 0;
}

/*
Input Format
3 
92 022
82 12
77 13
2 false numeric

*/