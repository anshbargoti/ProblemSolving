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



bool chck(int x, int d)
{
    while (x > 0)
    {
        if (x % 10 == d)
            return true;
        x /= 10;
    }
    return false;
}


void striker()
{
    int n, d;
    cin >> n >> d;
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    if (d == 1)
    {
        for (int i = 0; i < n; i++)
            cout << "YES" << endl;
        return;
    }
    for (int i = 0; i < n; i++)
    {
        int temp = arr[i];
        bool flag = false;
        while (temp > 0)
        {
            flag = chck(temp, d);
            if (flag)
            {
                cout << "YES" << endl;
                break;
            }
            temp -= d;
        }
        if (flag == false)
            cout << "NO" << endl;
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
    for(int i = 0; i < t; i++)
    {
        // cout<<"#Case: "<<i+1<<endl;
        striker();
        // cout << endl;
    }
    return 0;
}