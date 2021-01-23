#include<bits/stdc++.h>
using namespace std;



//#define int long long
// const int maxn = 2 * 1e5;
// vector<int> prm;
// const int MOD = 1000000007;



// void sieve()
// {
//     bool prime[maxn + 1];
//     memset(prime, true, sizeof(prime));
 
//     for (int p = 2; p * p <= maxn; p++)
//     {
//         if (prime[p] == true) 
//         {
//             for (int i = p * p; i <= maxn; i += p)
//                 prime[i] = false;
//         }
//     }
//     for (int p = 2; p <= maxn; p++)
//         if (prime[p])
//             prm.push_back(p);
// }



void striker()
{
    int n, m;
    cin >> n >> m;
    vector<string> vc(n);
    for (int i = 0; i < n; i++)
        cin >> vc[i];
    vector<vector<int>> dp(n + 1, vector<int>(m + 1, 0));
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (vc[i][j] == '*')
                dp[i][j] = 1;
        }
    }
    for (int i = n - 2; i >= 0; i--)
    {
        for (int j = m - 2; j >= 1; j--)
        {
            if (dp[i][j] == 1)
                dp[i][j] = 1 + min( {dp[i + 1][j - 1], dp[i + 1][j], dp[i + 1][j + 1]} );
        }
    }
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            ans += dp[i][j];
        }
    }
    cout << ans;
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
    for(int i = 0; i < t; i++)
    {
        //cout<<"#Case: "<<i+1<<endl;
        striker();
        cout << endl;
    }
    return 0;
}