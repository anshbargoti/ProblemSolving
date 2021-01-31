#include<bits/stdc++.h>
using namespace std;
#define int long long



// const int MOD = 1000000007;



void striker()
{
    int n;
    cin >> n;
    int c[n], a[n], b[n];
    for (int i = 0; i < n; i++)
        cin >> c[i];
    for (int i = 0; i < n; i++)
        cin >> a[i];
    for (int i = 0; i < n; i++)
    {
        cin >> b[i];
        b[i] = abs(b[i] - a[i]);
    }
    int ans = 0, res = 0;
    for (int i = 1; i < n; i++)
    {
        if (b[i] == 0)
            ans = 0;
        else
            ans = max(b[i], ans - b[i]);
        ans = ans + 2 + c[i] - 1;
        res = max(res, ans);
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
    for(int i=0;i<t;i++)
    {
        // cout<<"#Case: "<<i+1<<endl;
        striker();
        cout << endl;
    }
    return 0;
}