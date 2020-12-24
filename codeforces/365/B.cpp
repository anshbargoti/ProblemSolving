#include<bits/stdc++.h>
using namespace std;


//#define int long long
//const int MOD = 1000000007;


void striker()
{
    int n;
    cin >> n;
    int a, b;
    if (n == 1)
    {
        cin >> a;
        cout << 1;
        return;
    }
    else
    {
        cin >> a >> b;
        if (n == 2)
        {
            cout << 2;
            return;
        }
    }
    int ans = 2, res = INT_MIN;
    for (int i = 1; i <= n-2; i++)
    {
        int x;
        cin >> x;
        if (x == a + b)
            ans++;
        else
            ans = 2;
        a = b;
        b = x;
        res = max(res, ans);    
    }
    cout << res;
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