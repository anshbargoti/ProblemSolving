#include<bits/stdc++.h>
using namespace std;
#define int long long


// const int MOD = 1000000007;



int powerf(int x, int n)
{
    int res = 1;
    for (int i = 1; i <= n; i++)
        res *= x;
    return res;
}


void striker()
{
    int n, m;
    cin >> n >> m;
    if (n == 1)
        cout << 0;
    else if (n == 2)
        cout << m;
    else
        cout << 2 * m;
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
        //cout<<"#Case: "<<i+1<<endl;
        striker();
        cout << endl;
    }
    return 0;
}