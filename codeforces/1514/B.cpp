#include<bits/stdc++.h>
using namespace std;
#define int long long
const long long MOD = 1e9 + 7;



void striker()
{
    int n, k;
    cin >> n >> k;
    int ans = 1;
    for (int i = 0; i < k; i++)
    {
        ans = ans * n;
        ans %= MOD;
    }
    cout << ans;
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