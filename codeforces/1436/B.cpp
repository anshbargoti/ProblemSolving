#include<bits/stdc++.h>
using namespace std;



// #define int long long
// const int MOD = 1000000007;


void striker()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            int diff = abs(i - j);
            cout << (diff == 0 || diff == 1 ? 1 : 0) << " ";
        }
        cout << endl;
    }
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
        // cout<<"#Case: "<<i+1<<endl;
        striker();
        cout << endl;
    }
    return 0;
}