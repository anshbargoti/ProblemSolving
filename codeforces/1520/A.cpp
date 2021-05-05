#include<bits/stdc++.h>
using namespace std;
#define int long long
// const int MOD = 1e9 + 7;



void striker()
{
    int n;
    cin >> n;
    string str;
    cin >> str;
    char prev;
    bool vis[26] = {false};
    bool flag = false;
    for (int i = 0; i < n; i++)
    {
        if (vis[str[i] - 'A'])
            flag = true;
        prev = str[i];
        vis[str[i] - 'A'] = true;
        while (str[i] == prev && i < n)
            i++;
        i--;
    }
    if (!flag)
        cout << "YES";
    else
        cout << "NO";
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