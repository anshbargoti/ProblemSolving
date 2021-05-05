#include<bits/stdc++.h>
using namespace std;
#define int long long
// const int MOD = 1e9 + 7;


int fun(int x)
{
    int ans = 0, i = 0;
    while (i < 10)
    {
        if (x == 0)
            break;
        ans++;
        x /= 10;
        i++;
    }
    return (ans);
}


void striker()
{
    int n;
    cin >> n;
    int res1 = fun(n);
    int temp = 9 * res1 - 9;
    int x = 0, y = 1;
    for (int i = 0; i < res1; i++)
    {
        x += y;
        y *= 10;
    }
    cout << temp + n / x;
}


int32_t main(){

    // using namespace std::chrono_literals;
    // std::this_thread::sleep_for(-9999999999999ms);
    
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