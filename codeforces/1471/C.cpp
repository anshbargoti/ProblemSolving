#include<bits/stdc++.h>
using namespace std;
#define int long long


//const int MOD = 1000000007;


void striker()
{
    int n, m;
    cin >> n >> m;
    int k[n + 1], c[m + 1];
    for (int i = 1; i <= n; i++)
        cin >> k[i];
    for (int i = 1; i <= m; i++)
        cin >> c[i];
    sort(k + 1, k + n + 1, greater<int>());
    int res = 0;
    for (int i = 1, j = 1; i <= n; i++)
    {
        if (j <= m && j <=k[i])
            res += c[j++];
        else
            res += c[k[i]];
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
        //cout<<"#Case: "<<i+1<<endl;
        striker();
        cout<<endl;
    }
     return 0;
}