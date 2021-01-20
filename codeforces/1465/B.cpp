#include<bits/stdc++.h>
using namespace std;
#define int long long



const int maxn = 2 * 1e5;
vector<int> prm;
const int MOD = 1000000007;



void sieve()
{
    bool prime[maxn + 1];
    memset(prime, true, sizeof(prime));
 
    for (int p = 2; p * p <= maxn; p++)
    {
        if (prime[p] == true) 
        {
            for (int i = p * p; i <= maxn; i += p)
                prime[i] = false;
        }
    }
    for (int p = 2; p <= maxn; p++)
        if (prime[p])
            prm.push_back(p);
}




bool div_check(int n)
{
    string s = to_string(n);
    for (char x : s)
    {
        if (x == '0' || x == '1')
            continue;
        else if (n % (x - '0') != 0)
            return false;
    }
    return true;
}


void striker()
{
    int n;
    cin >> n;
    if (div_check(n))
        cout << n;
    else
    {
        while (++n)
        {
            if (div_check(n))
                break;
        }
        cout << n;
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
        //cout<<"#Case: "<<i+1<<endl;
        striker();
        cout << endl;
    }
    return 0;
}