#include<bits/stdc++.h>
using namespace std;



//#define int long long
// const int MOD = 1000000007;



void striker()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    int ans = 0, i = 0;
    while (i <= n - 2)
    {
        int a = arr[i] * 2;
        int b = arr[i + 1] * 2;
        if (arr[i + 1] > a || arr[i] > b)
        {
            int maxi = max(arr[i], arr[i + 1]);
            int mini = min(arr[i], arr[i + 1]);
            while (true)
            {
                if (maxi <= 2 * mini)
                    break;
                mini *= 2;
                ans++;
            }
        }
        i++;
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