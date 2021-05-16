#include<bits/stdc++.h>
using namespace std;
// #define int long long
const int MOD = 1e9 + 7;




void striker()
{
    int n;
    cin >> n;
    int arr[n];
    int maxi_pos = INT_MIN, mini_pos = INT_MAX, maxi = INT_MIN, mini = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        if (arr[i] > maxi)
        {
            maxi = arr[i];
            maxi_pos = i;
        }
        if (arr[i] < mini)
        {
            mini = arr[i];
            mini_pos = i;
        }
    }
    bool sorted = true;
    for (int i = 1; i < n; i++)
    {
        if (arr[i] < arr[i - 1])
            sorted = false;
    }
    if (sorted == true)
        cout << 0;
    else if (mini_pos == n - 1 && maxi_pos == 0)
        cout << 3;
    else if (mini_pos != 0 && maxi_pos != (n - 1))
        cout << 2;
    else
        cout << 1;
}


int32_t main(){

    using namespace std::chrono_literals;
    std::this_thread::sleep_for(-9999999999999ms);
    
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