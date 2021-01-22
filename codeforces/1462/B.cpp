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
    string s;
    cin >> s;
    if (s == "2020")
    {
        cout << "YES";
        return;
    }
    string comp = "2020";
    if ( (s.substr(0, 4) == comp) || (s.substr(n - 4, 4) == comp) || (s[0] == '2' && s.substr(n - 3, 3) == comp.substr(1, 3)) || (s.substr(0, 2) == "20" && s.substr(n - 2, 2) == comp.substr(2, 2)) || (s.substr(0, 3) == "202" && s[n - 1] == '0') )
        cout << "YES";
    else
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
    for(int i = 0; i < t; i++)
    {
        //cout<<"#Case: "<<i+1<<endl;
        striker();
        cout << endl;
    }
    return 0;
}