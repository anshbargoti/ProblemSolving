#include<bits/stdc++.h>
using namespace std;
#define int long long
// const int MOD = 1e9 + 7;




void striker()
{
    int n, m, x;
    cin >> n >> m >> x;
    vector<pair<int, int>> vc;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        vc.push_back({x, i});
    }
    sort(vc.begin(), vc.end());
    reverse(vc.begin(), vc.end());
    vector<int> res(n);
    int curr = m;
    int i = 0;
    for (int i = 0; i < n; i++)
    {
        if (i < m)
            res[vc[i].second] = curr--;
        else
        {
            res[vc[i].second] = ++curr;
            curr %= m;
        }   
    }
    cout << "YES" << endl;
    for (auto x : res)
        cout << x << " ";
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