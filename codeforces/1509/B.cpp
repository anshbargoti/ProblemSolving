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
    int ct = 0, cm = 0;
    for (char ch : s)
    {
        if (ch == 'T')
            ct++;
        else
            cm++;
    }
    if (ct != 2 * cm)
    {
        cout << "NO";
        return;
    }
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        count += (s[i] == 'T' ? 1 : -1);
        if (count < 0)
        {
            cout << "NO";
            return;
        }
    }
    count = 0;
    for (int i = n - 1; i >= 0; i--)
    {
        count += (s[i] == 'T' ? 1 : -1);
        if (count < 0)
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