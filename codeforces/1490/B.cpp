#include<bits/stdc++.h>
using namespace std;
#define int long long


// const int MOD = 1000000007;



void striker()
{
    int n;
    cin >> n;
    int arr[n];
    int res[3] = {0};
    int tot = n / 3;
    for (int i = 0; i < 3; i++)
        res[i] = -tot;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        if (arr[i] % 3 == 0)
            res[0]++;
        else if (arr[i] % 3 == 1)
            res[1]++;
        else
            res[2]++;
    }
    int cnt = 0, i = 0, ans = 0;
    while (cnt < 3)
    {
        if (res[i] <= 0)
            cnt++;
        else
        {
            res[i % 3] -= 1;
            res[(i + 1) % 3] += 1;
            ans += 1;
            cnt = 0;
        }
        i++;
        if (i == 3)
            i = 0;
    }
    cout << ans;
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