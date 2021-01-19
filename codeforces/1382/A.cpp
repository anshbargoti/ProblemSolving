#include<bits/stdc++.h>
using namespace std;



//#define int long long
// const int MOD = 1000000007;



void striker()
{
    int n, m;
    cin >>n >> m;
    int arr[n];
    bool vis[1005] = {false};
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        vis[arr[i]] = true;
    }
    int ans = 0;
    for (int i = 0; i < m; i++)
    {
        int x;
        cin >> x;
        if (vis[x] == true)
            ans = x;
    }
    if (ans == 0)
        cout << "NO";
    else
        cout << "YES" << endl << 1 << " " << ans; 
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
    for(int i = 0; i < t; i++)
    {
        //cout<<"#Case: "<<i+1<<endl;
        striker();
        cout << endl;
    }
    return 0;
}