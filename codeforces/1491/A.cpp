#include<bits/stdc++.h>
using namespace std;



//#define int long long
// const int MOD = 1000000007;



void striker()
{
    int n, q;
    cin >> n >> q;
    int arr[n + 1];
    int sum = 0;
    for (int i = 1; i <= n; i++)
    {
        cin >> arr[i];
        sum += arr[i];
    }
    for (int i = 0; i < q; i++)
    {
        int a, b;
        cin >> a >> b;
        if (a == 1)
        {
            sum -= arr[b];
            arr[b] = 1 - arr[b];
            sum += arr[b];
        }
        else
        {
            if (b <= sum)
                cout << 1 << endl;
            else
                cout << 0 << endl;
        }
    }
}

int32_t main(){

    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

#ifndef ONLINE_JUDGE
    clock_t tStart = clock();
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    
    int t = 1;
    // cin >> t;
    for (int i = 0; i < t; i++)
    {
        // cout << "#Case: " << i + 1 << endl;
        striker();
        // cout << endl;
    }

#ifndef ONLINE_JUDGE
    printf("\nRun Time -> %.10fs\n", (double)(clock()-tStart) / CLOCKS_PER_SEC);
#endif

    return 0;
}