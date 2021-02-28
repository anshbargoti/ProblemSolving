#include<bits/stdc++.h>
using namespace std;
#define int long long


// const int MOD = 1000000007;



void striker()
{
    int n, u, v;
    cin >> n >> u >> v;
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    int maxi = 0;
    for (int i = 1; i < n; i++)
    {
        int x = abs(arr[i] - arr[i - 1]);
        maxi = max(x, maxi);
    }
    if (maxi == 1)
        cout << min(u, v);
    else if (maxi == 0)
        cout << min(u, v) + v;
    else
        cout << 0;
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