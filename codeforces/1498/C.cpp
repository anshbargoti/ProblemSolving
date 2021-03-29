#include<bits/stdc++.h>
using namespace std;
#define int long long

const int MOD = 1000000007;



void striker()
{
    int n, k;
    cin >> n >> k;
    if (k < 2)
    {
        cout << 1;
        return;
    }
    int ans = 0;
    vector<int> vc(n + 2);
    for (int i = 0; i < k; i++)
    {
        vector<int> tmp(n + 2);
        int res = 0;
        if (i == 0)
            res = 1;
        if (i & 1)
        {
            for (int j = n; j >= 1; j--)
            {
                tmp[j] = res;
                res = (res + vc[j]) % MOD;
            }
            ans = (ans + res) % MOD;
        }
        else
        {
            for (int j = 1; j <= n; j++)
            {
                tmp[j] = res;
                res = (res + vc[j]) % MOD;
            }
            ans = (ans + res) % MOD;
        }
        for (int j = 0; j <= n + 1; j++)
            vc[j] = tmp[j];
    }
    cout << ans;
}


int32_t main(){

    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

#ifndef ONLINE_JUDGE
    clock_t tStart = clock();
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    
    int t;
    cin >> t;
    for (int i = 1; i <= t; i++)
    {
        // cout << "Case #" << i << ": ";
        striker();
        cout << endl;
    }

#ifndef ONLINE_JUDGE
    printf("\nRun Time -> %.10fs\n", (double)(clock()-tStart) / CLOCKS_PER_SEC);
#endif

    return 0;
}