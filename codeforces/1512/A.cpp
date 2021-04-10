#include<bits/stdc++.h>
using namespace std;
#define int long long
// const int MOD = 1000000007;


void striker()
{
    int n;
    cin >> n;
    unordered_map<int, int> mp;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        arr[i] = x;
        mp[x]++;
    }
    int ele = 0;
    for (auto x : mp)
    {
        if (x.second == 1)
        {
            ele = x.first;
            break;
        }
    }
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == ele)
        {
            cout << i + 1;
            return;
        }
    }
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
        // cout << "Case #" << i + 1 << ": ";
        striker();
        cout << endl;
    }
    return 0;
}