#include<bits/stdc++.h>
using namespace std;
#define int long long


// const int MOD = 1000000007;


void striker()
{
    int n, k;
    cin >> n >> k;
    vector<int> res;
    int x = k + 1;
    for (int i = x / 2; i < k; i++)
        res.push_back(i);
    for (int i = x; i <= n; i++)
        res.push_back(i);
    cout << res.size() << endl;
    for (int x : res)
        cout << x << " ";  
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
    for (int i = 0; i < t; i++)
    {
        // cout << "#Case: " << i + 1 << endl;
        striker();
        cout << endl;
    }

#ifndef ONLINE_JUDGE
    printf("\nRun Time -> %.10fs\n", (double)(clock()-tStart) / CLOCKS_PER_SEC);
#endif

    return 0;
}