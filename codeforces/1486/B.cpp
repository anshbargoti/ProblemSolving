#include<bits/stdc++.h>
using namespace std;
#define int long long


// const int MOD = 1000000007;



void striker()
{
    int n;
    cin >> n;
    int arr[n], brr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i] >> brr[i];
    if (n % 2 == 1)
    {
        cout << 1;
        return;
    }
    sort(arr, arr + n);
    sort(brr, brr + n);
    int req = n / 2;
    int ans1 = arr[req] - arr[req - 1] + 1;
    int ans2 = brr[req] - brr[req - 1] + 1;
    cout << ans1 * ans2;
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