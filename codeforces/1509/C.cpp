#include<bits/stdc++.h>
using namespace std;
#define int long long
// const int MOD = 1000000007;



int go(vector<vector<int>> &dp, int arr[], int l, int r)
{
    if (l > r)
        return 0;
    if (dp[l][r] != -1)
        return dp[l][r];
    dp[l][r] = 0;
    dp[l][r] = arr[r] - arr[l];
    dp[l][r] += min(go(dp, arr, l + 1, r), go(dp, arr, l, r - 1));
    return dp[l][r];
}


void striker()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    sort(arr, arr + n);
    vector<vector<int>> dp(n, vector<int>(n, -1));
    cout << go(dp, arr, 0, n - 1);
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
        // cout << "Case #" << i + 1 << ": ";
        striker();
        cout << endl;
    }
    return 0;
}