#include<bits/stdc++.h>
using namespace std;

//#define int long long
//const int MOD = 1000000007;


void striker()
{
    int n, m;
    cin >> n >> m;
    int a = n * (n + 1) / 2;
    m = m % a;
    int i = 1;
    int ans = 0;
    while (m >= i)
    {
        m -= i;
        ++i;
        if (i == n + 1)
            i = 1;
    }
    cout << m;
}

int32_t main(){

    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    
    int t=1;
//    cin>>t;
    for(int i=0;i<t;i++)
    {
        //cout<<"#Case: "<<i+1<<endl;
        striker();
        cout<<endl;
    }
     return 0;
}