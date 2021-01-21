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
    int n;
    cin >> n;
    if (n == 1)
    {
        cout << 4;
        return;
    }
    if (n % 2 == 0)
        cout << (n / 2 + 1) * (n / 2 + 1);
    else
        cout << n * ((n + 3) / 2) + ((n + 3) / 2);


// odd => 12(n=3), 24(n=5), 40(n=7), 60(n=9)
//  3 * 3 + 3 = 12
//  5 * 4 + 4 = 24
//  7 * 5 + 5 = 40
//  9 * 6 + 6 = 60
//  n * k + k = answer
//  2 * (k - 2) + 1 = n   => k = (n + 3) / 2

}

int32_t main(){

    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif


    int t = 1;
//    cin >> t;
    for(int i = 0; i < t; i++)
    {
        //cout<<"#Case: "<<i+1<<endl;
        striker();
        cout << endl;
    }
    return 0;
}