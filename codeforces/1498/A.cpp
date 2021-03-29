#include<bits/stdc++.h>
using namespace std;
#define int long long

// const int MOD = 1000000007;



void striker()
{
    int n;
    cin >> n;
    while (true)
    {
        int sum = 0;
        int x = n;
        while (x != 0)
        {
            sum += x % 10;
            x /= 10;
        }
        if (__gcd(sum, n) > 1)
        {
            cout << n;
            return;
        }
        n++;
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