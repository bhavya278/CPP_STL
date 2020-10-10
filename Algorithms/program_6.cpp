#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main()
{
    int arr[] = {10, 20, 30, 40, 50};
    int n = sizeof(arr) / sizeof(int);
    rotate(arr, arr + 2, arr + n);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    //apply on vector
    vector<int> v = {10, 20, 30, 40, 50};
    rotate(v.begin(), v.begin() + 3, v.end());
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }

    cout << endl;
    //next_permutation
    vector<int> vt = {1, 2, 3};
    next_permutation(vt.begin(), vt.end());
    next_permutation(vt.begin(), vt.end());

    for (int x : vt)
    {
        cout << x << " ";
    }

    return 0;
}
