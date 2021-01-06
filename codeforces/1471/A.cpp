#include<bits/stdc++.h>
using namespace std;
#define int long long


//const int MOD = 1000000007;


void striker()
{
    int n, x;
    cin >> n >> x;
    int mini = 0, maxi = 0;
    for (int i = 0; i < n; i++)
    {
        int a;
        cin >> a;
        maxi += a / x + (a % x != 0);
        mini += a;
    }
    cout << mini / x + (mini % x != 0) << " " << maxi;
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