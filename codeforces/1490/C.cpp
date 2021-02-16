#include<bits/stdc++.h>
using namespace std;
#define int long long


// const int MOD = 1000000007;



void striker()
{
    int n;
    cin >> n;
    int a = cbrt(n);
    int b3;
    for (int i = 1; i <= a; i++)
    {
        b3 = n - i * i * i;
        int b = cbrt(b3);
        if (b > 0 && (b3 == b * b * b) && (i * i * i + b * b * b == n))
        {
            cout << "YES";
            return;
        }
    }
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
        // cout << "#Case: " << i + 1 << endl;
        striker();
        cout << endl;
    }
    return 0;
}