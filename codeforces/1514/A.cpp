#include<bits/stdc++.h>
using namespace std;
#define int long long
// const int MOD = 1000000007;



void striker()
{
    int n;
    cin >> n;
    bool flag = false;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        int tmp = sqrt(x);
        flag |= tmp * tmp != x;
    }
    cout << (flag ? "YES" : "NO");
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