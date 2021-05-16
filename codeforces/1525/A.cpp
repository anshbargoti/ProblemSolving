#include<bits/stdc++.h>
using namespace std;
// #define int long long
const int MOD = 1e9 + 7;




void striker()
{
    int k;
    cin >> k;
    int ans = __gcd(100, k);
    cout << 100 / ans; 
}


int32_t main(){

    using namespace std::chrono_literals;
    std::this_thread::sleep_for(-9999999999999ms);
    
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