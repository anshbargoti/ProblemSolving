#include<bits/stdc++.h>
using namespace std;
#define int long long
// const int MOD = 1e9 + 7;
const int maxn = 2000001;
const int mod = 998244353;
int count_e[maxn];


void precompute()
{
    int i = 2, j;
    while (i <= maxn - 1)
    {
        j = i;
        while (j <= maxn - 1)
        {
            count_e[j]++;
            j += i;
        }
        i += 2;
    }
}

void striker()
{

    int n;
    cin >> n;

    vector<int> res(n + 1);
    vector<int> pre(n + 1);
    res[0] = 1;
    res[1] = 1;
    pre[0] = 1;
    pre[1] = 2;
    for (int i = 2; i <= n; i++)
    {
        int val = (count_e[2 * i] + pre[i - 1]);
        val--;
        val %= mod;
        res[i] = val;
        pre[i] = val + pre[i - 1];
        pre[i] %= mod;
    }
    cout << res[n];

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
    

    precompute();
    int t = 1;
    // cin >> t;
    for (int i = 0; i < t; i++)
    {
        // cout << "Case #" << i + 1 << ": ";
        striker();
        cout << endl;
    }
    return 0;
}