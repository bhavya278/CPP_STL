//Inversion Count->return pair of indexes
//i<j and a[i]>a[j]
// Approach:-
//1.Merge Sort Tree
//2.PBDS

#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>

using namespace std;
using namespace __gnu_pbds;

typedef tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update> PBDS;

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    
    //Distinct
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }

    PBDS St;

    int inversion_count=0;
    for (int i = 0; i < n; i++)
    {
        inversion_count+=St.size()-St.order_of_key(a[i]);

        St.insert(a[i]);
    }
    

    cout<<inversion_count;
    return 0;
}