#include<bits/stdc++.h>
using namespace std;



// #define int long long
// const int MOD = 1000000007;


void striker()
{
    int x, y, a, b;
    cin >> x >> y >> a >> b;
    int res = (y - x) % (a + b);
    if (res == 0)
        cout << (y - x) / (a + b);
    else
        cout << -1;
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
        // cout<<"#Case: "<<i+1<<endl;
        striker();
        cout << endl;
    }
    return 0;
}