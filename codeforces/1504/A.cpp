#include<bits/stdc++.h>
using namespace std;



//#define int long long
// const int MOD = 1000000007;

     
bool chck(string str)
{
    int n = str.size();
    for (int i = 0; i < n; i++)
    {
        if (str[i] != str[n - 1 - i])
            return false;
    }
    return true;
}


void striker()
{
    string s;
    cin >> s;
    int n = s.size();
    for (int i = 0; i < n; i++)
    {
        if (s[i] != 'a')
        {
            cout << "YES" << endl;
            if (chck(s + 'a') == true)
                cout << "a" << s;
            else
                cout << s << "a";
            return;
        }
    }
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