#include<bits/stdc++.h>
using namespace std;



// #define int long long
// const int MOD = 1000000007;


void striker()
{
    int n, t;
    cin >> n >> t;
    if (n == 1 && t == 10)
    {
        cout << -1;
        return;
    }
    for (int i = 0; i < n; i++)
    {
        if (i == 0 && t == 10)
        {
            cout << t;
            i++;
        }
        else if (i == 0 && t < 10)
            cout << t;
        else
            cout << 0;
    }
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