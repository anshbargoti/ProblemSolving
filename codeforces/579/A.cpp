#include<bits/stdc++.h>
using namespace std;
#define int long long
const int MOD = 1000000007;




void striker()
{
    int x;
    cin >> x;
    int ans = 0;
    while (x > 0)
    {
        ans += (x % 2 == 0 ? 0 : 1);
        x /= 2;
    }
    cout << ans;
}


int32_t main(){

    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    
    int t = 1;
    // cin >> t;
    for (int i = 0; i < t; i++)
    {
        // cout<<"#Case: "<<i+1<<endl;
        striker();
        cout << endl;
    }
    return 0;
}