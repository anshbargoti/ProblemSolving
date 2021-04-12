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
    int n, q;
    cin >> n >> q;
    vector<int> vc(n);
    for (int i = 0; i < n; i++)
        cin >> vc[i];
    set<int> unq[51];
    ent<int> crd;
 
 
    for (int i = 0;i < n; i++)
    {
        unq[vc[i]].insert(i);
        crd.insert(i);
    }
 
    int curr_i = 0;
    for (int i = 0; i < q; i++)
    {
        int x;
        cin >> x;
        int j = *unq[x].begin();
        cout << crd.order_of_key(j) + 1 << " ";
        crd.erase(crd.find(j));
        unq[x].erase(unq[x].begin());
        curr_i--;
        unq[x].insert(curr_i);
        crd.insert(curr_i);
    }
}

int32_t main(){

    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    
    int t = 1;
    // cin >> t;
    for (int i = 0; i < t; i++)
    {
        // cout << "Case #" << i + 1 << ": ";
        striker();
        cout << endl;
    }
    return 0;
}