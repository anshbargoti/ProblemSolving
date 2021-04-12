#include<bits/stdc++.h>
using namespace std;
#define int long long
// const int MOD = 1000000007;


void striker()
{
    int n;
    cin >> n;
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        if (x == 1 || x == 3)
            count++;
    }
    cout << count;
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