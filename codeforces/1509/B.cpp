#include<bits/stdc++.h>
using namespace std;
#define int long long
// const int MOD = 1000000007;



void striker()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    int count_t = 0, count_m = 0;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == 'T')
            count_t++;
        else
            count_m++;
    }
    if (count_t != 2 * count_m)
    {
        cout << "NO";
        return;
    }
    int curr_t = 0, curr_m = 0;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == 'T')
            curr_t++;
        else
            curr_m++;
        if (curr_m > curr_t || count_m - curr_m > count_t - curr_t)
        {
            cout << "NO";
            return;
        }
    }
    cout << "YES";
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