#include<bits/stdc++.h>
using namespace std;


//#define int long long
// const int MOD = 1000000007;


void striker()
{
    int x, y, n;
    cin >> x >> y >> n;
    int res =n - n % x;
    if (res + y <= n)
        cout << res + y;
    else
        cout << res + y - x;
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
    for(int i=0;i<t;i++)
    {
        //cout<<"#Case: "<<i+1<<endl;
        striker();
        cout<<endl;
    }
     return 0;
}