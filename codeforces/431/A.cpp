#include<bits/stdc++.h>
using namespace std;



// #define int long long
// const int MOD = 1000000007;


void striker()
{
    int arr[5];
    for (int i = 1; i <= 4; i++)
        cin >> arr[i];
    int ans = 0;
    string s;
    cin >> s;
    for (int i = 0; i < s.size(); i++)
        ans += arr[s[i] - '0'];
    cout << ans;
}


int32_t main(){

    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    
    int t = 1;
    // cin >> t;
    for (int i = 0; i < t; i++)
    {
        // cout<<"#Case: "<<i+1<<endl;
        striker();
        cout << endl;
    }
    return 0;
}