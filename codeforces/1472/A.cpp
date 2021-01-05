#include<bits/stdc++.h>
using namespace std;



//#define int long long
//const int MOD = 1000000007;


void striker()
{
    int w, h, n;
    cin >> w >> h >> n;
    int res = 1;
    w = w * h;
    while (w % 2 == 0)
    {
        w /= 2;
        res *= 2;
    }
    cout << (res >= n ? "YES" : "NO");
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