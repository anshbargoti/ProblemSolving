#include<bits/stdc++.h>
using namespace std;
#define int long long
#define pb push_back
#define f first
#define s second


//const int MOD = 1000000007;


void striker()
{
    int n, x;
    cin >> n >> x;
    vector<pair<int, int>> vc;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        vc.pb({x, 1});
    }
    int i = 0;
    while (i != vc.size())
    {
        if (vc[i].f % x == 0)
            vc.pb( {vc[i].f / x, vc[i].s * x} );
        else
            break;
        i++;
    }
    int sum = 0;
    for (int i = 0; i < vc.size(); i++)
        sum += vc[i].f * vc[i].s;
    cout << sum;
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