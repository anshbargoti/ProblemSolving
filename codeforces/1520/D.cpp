#include<bits/stdc++.h>
using namespace std;
#define int long long
// const int MOD = 1e9 + 7;


int callc(int x)
{
    return (x * (x - 1) / 2);
}

void striker()
{
    int n;
    cin >> n;
    int arr[n];
    map<int, int> mp;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        mp[arr[i] - i]++;
    }
    int res = 0;
    for (auto it = mp.begin(); it != mp.end(); it++)
    {
        int tmp = callc(it -> second);
        res += tmp;
    }
    cout << res;

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