#include<bits/stdc++.h>
using namespace std;



//#define int long long
// const int MOD = 1000000007;



void striker()
{
    string s, t;
    cin >> s >> t;
    int n = s.size(), m = t.size();
    int max_sz = (n * m) / __gcd(n, m);
    string a, b;
    for (int i = 0; i < max_sz; i++)
    {
        a += s[i % n];
        b += t[i % m];
    }
    if (a == b)
        cout << a;
    else
        cout << -1;
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