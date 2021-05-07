#include<bits/stdc++.h>
using namespace std;
// #define int long long
const int MOD = 1e9 + 7;
const int maxn = 2e5 + 20;
vector<int> vc(maxn);



// void calc(int i, int j)
// {
//     while ( (__gcd(vc[i], vc[j]) != 1) )
//         vc[j]++;
// }

void striker()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        vc[i + 1] = x;
    }
    vc[0] = 1;
    vc[n + 1] = 1;
    cout << n - 1 << endl;
    for (int i = 2; i < n + 1; i++)
    {
        if (vc[i] < vc[i - 1])
        {
            while ( (__gcd(vc[i - 2], vc[i - 1]) != 1) || (__gcd(vc[i - 1], vc[i]) != 1) )
                vc[i - 1]++;
        }
        else
        {
            while ( (__gcd(vc[i - 1], vc[i]) != 1) )
                vc[i]++;
        }
        cout << i - 1 << ' ' << i << ' ' << vc[i - 1] << ' ' << vc[i] << endl;
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
        // cout << endl;
    }
    return 0;
}