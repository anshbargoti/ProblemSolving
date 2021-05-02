#include<bits/stdc++.h>
using namespace std;
#define int long long
// const int MOD = 1e9 + 7;




void striker()
{
    int n;
    cin >> n;
    vector<pair<int, int>> vc;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        vc.push_back({x, i});
    }
    sort(vc.begin(), vc.end());
    int ans = INT_MAX, curr;
    for (int i = 0; i < n; )
    {
        if (vc[i].second > 0)
            curr = 1;
        else
            curr = 0;
        int j = i + 1;
        while (j < n && vc[i].first == vc[j].first)
        {
            if (vc[j].second - vc[j - 1].second > 1)
                curr++;
            j++;
        }
        if (vc[j - 1].second < n - 1)
            curr++;
        i = j;
        ans = min(ans, curr);
    }
    cout << ans;
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