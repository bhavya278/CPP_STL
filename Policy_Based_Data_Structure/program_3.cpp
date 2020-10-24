//i<j 
//a[i]+a[j]  >  b[i]+b[j]  we can write this as a[i]-b[i] > b[j]-a[j]

//c[i]=a[i]-b[i]  i>j
//c[i]>-c[j]

#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>

using namespace std;
using namespace __gnu_pbds;

typedef tree<pair<int, int>, null_type, less<pair<int, int>>, rb_tree_tag, tree_order_statistics_node_update > PBDS;

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    //Distinct
    int n;
    cin >> n;
    int a[n],b[n],c[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++)
    {
        cin >> b[i];
    }
    for (int i = 0; i < n; i++)
    {
        c[i]=a[i]-b[i];
    }

    PBDS St;

    long long int ans = 0;
    for (int i = 0; i < n; i++)
    {
        ans += St.size() - St.order_of_key({-c[i], 100000000});
        St.insert({c[i],i});
    }

    cout << ans;
    return 0;
}