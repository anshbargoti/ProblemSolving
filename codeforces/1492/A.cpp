#include<bits/stdc++.h>
using namespace std;
#define int long long

// const int MOD = 1000000007;



void striker()
{
    int p, a, b, c;
    cin >> p >> a >> b >> c;
    int ans = 0;
    int x = a, y = b, z = c;
    x = (x - p % a) % a;
    y = (y - p % b) % b;
    z = (z - p % c) % c;
    cout << min({x, y, z});
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
        // cout << "#Case: " << i + 1 << endl;
        striker();
        cout << endl;
    }
    return 0;
}