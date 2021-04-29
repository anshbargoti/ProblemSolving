#include<bits/stdc++.h>
using namespace std;
#define int long long
// const int MOD = 1000000007;



void striker()
{
    int r, b, d;
    cin >> r >> b >> d;
    if (r < 1 || b < 1)
    {
        cout << "NO";
        return;
    }
    int x = max(r, b) / min(r, b) + (max(r, b) % min(r, b) != 0);
    if (x - 1 <= d)
        cout << "YES";
    else
        cout << "NO";
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