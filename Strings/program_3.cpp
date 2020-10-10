#include <iostream>
#include <cstring>
using namespace std;

//char *strtok(char *s,char *delimiters)
//returns a token on each subsequent call
//on the first call function should be passed with single argument for 's'
//on subsequent calls we shouls pass the string argument as null

int main()
{
    char s[100] = "Today is a rainy day";
    char *ptr = strtok(s, "i");
    cout << ptr << endl;

    // ptr = strtok(NULL, "i");
    // cout << ptr << endl;

    while (ptr != NULL)
    {
        ptr = strtok(NULL, " ");
        cout << ptr << endl;
    }
    return 0;
}