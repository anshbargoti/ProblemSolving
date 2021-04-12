#include<bits/stdc++.h>
using namespace std;
#include <ext/pb_ds/assoc_container.hpp> // Common file
#include <ext/pb_ds/tree_policy.hpp> // Including tree_order_statistics_node_update
using namespace __gnu_pbds;
template <typename tmp>
using ent = tree<tmp,null_type,less<tmp>,rb_tree_tag,tree_order_statistics_node_update>;
#define int long long
// const int MOD = 1000000007;


void striker()
{
    int a, b, c; 
    cin >> a >> b >> c;
    cout << 1; 
    for (int i = 0; i <= a - 2; i++)
        cout << 0;
    cout << " ";
    for (int i = 0; i <= b - c; i++)
        cout << 1;
    for (int i = 0; i <= c - 2; i++)
        cout << 0; 
}

int32_t main(){

    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        // cout << "Case #" << i + 1 << ": ";
        striker();
        cout << endl;
    }
    return 0;
}