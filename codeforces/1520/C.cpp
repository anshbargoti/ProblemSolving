#include<bits/stdc++.h>
using namespace std;
#define int long long
// const int MOD = 1e9 + 7;




void striker()
{
    int n;
    cin >> n;
    if (n == 1)
    {
        cout << 1;
        return;
    }
    if (n == 2)
    {
        cout << -1;
        return;
    }
    int arr[n][n];
    int i = 0, j, tmp = 1;
    while (i < n)
    {
        if ((i + 1) & 1 == 1)
                j = 1;
            else
                j = 0;
        while (j < n)
        {
            arr[i][j] = tmp++;
            j += 2;
        }
        i++;
    }
    i = 0;
    while (i < n)
    {
        if (i & 1 == 1)
                j = 1;
            else
                j = 0;
        while (j < n)
        {
            arr[i][j] = tmp++;
            j += 2;
        }
        i++;
    }
    
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
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