#include<bits/stdc++.h>
using namespace std;


//#define int long long
//const int MOD = 1000000007;


void striker()
{
    int n;
    cin >> n;
    int r[n + 1] = {0};
    for (int i = 1; i <= n; i++)
    {
        cin >> r[i];
        r[i] += r[i - 1];
    }
    int m;
    cin >> m;
    int b[m + 1] = {0};
    for (int i = 1; i <= m; i++)
    {
        cin >> b[i];
        b[i] += b[i - 1];
    }
    int res = 0;
    for (int i = 0; i <= n; i++)
    {
        for (int j = 0; j <= m; j++)
        {
            res = max(res, r[i] + b[j]);
        }
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
        //cout<<"#Case: "<<i+1<<endl;
        striker();
        cout << "\n";
    }
     return 0;
}