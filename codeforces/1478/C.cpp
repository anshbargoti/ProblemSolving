#include<bits/stdc++.h>
using namespace std;
#define int long long



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
    int n;
    cin >> n;
    set<int> s;
    int d[2 * n];
    for (int i = 0; i < 2 * n; i++)
    {
        cin >> d[i];
        s.insert(d[i]);
    }
    if (s.size() != n)
    {
        cout << "NO";
        return;
    }
    vector<int> v;
    for (int x : s)
        v.push_back(x);
    int sum = 0;
    bool flag = true;
    for (int i = n - 1; i >= 0; i--)
    {
        v[i] -= sum;
        int temp = 2 * (i + 1);
        if ( v[i] > 0 && v[i] % temp == 0 )
        {
            v[i] = v[i] / temp;
            sum += 2 * v[i];
        }
        else
        {
            flag = false;
            break;
        }
    }
    cout << (flag ? "YES" : "NO");
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
        // cout<<"#Case: "<<i+1<<endl;
        striker();
        cout << endl;
    }
    return 0;
}