#include<bits/stdc++.h>
using namespace std;
#define int long long


// const int MOD = 1000000007;



void striker()
{
    int n;
    cin >> n;
    int arr[n], sum = 0;
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    bool flag = true;
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
        sum -= i;
        if (sum >= 0)
            continue;
        else
        {
            flag = false;
            break;
        }
    }
    if (flag)
        cout << "YES";
    else
        cout << "NO";
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