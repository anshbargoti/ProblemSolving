#include<bits/stdc++.h>
using namespace std;
#define int long long
// const int MOD = 1000000007;



void striker()
{
    int n;
    cin >> n;
    if (n % 2050 != 0)
    {
        cout << -1;
        return;
    }
    int x = n / 2050;
    int res = 0;
    while (x > 0)
    {
        res += x % 10;
        x /= 10;
    }
    cout << res;
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