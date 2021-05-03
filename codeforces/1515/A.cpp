#include<bits/stdc++.h>
using namespace std;
#define int long long
// const int MOD = 1e9 + 7;




void striker()
{
    int n, k;
    cin >> n >> k;
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    if (n == 1)
    {
        if (k == arr[0])
        {
            cout << "NO";
            return;
        }
        else
        {
            cout << "YES" << endl;
            cout << arr[0];
            return;
        }
    }
    int sum = 0;
    vector<int> vc;
    for (int i = 0; i < n - 1; i++)
    {
        if (sum + arr[i] == k)
            swap(arr[i], arr[i + 1]);
        sum += arr[i];
        vc.push_back(arr[i]);
    }
    vc.push_back(arr[n - 1]);
    sum = 0;
    for (int i = 0; i < vc.size(); i++)
    {
        sum += vc[i];
        if (sum == k)
        {
            cout << "NO";
            return;
        }
    }
    cout << "YES" << endl;
    for (auto x : vc)
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