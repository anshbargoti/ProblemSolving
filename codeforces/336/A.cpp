#include<bits/stdc++.h>
using namespace std;

//#define int long long
//const int MOD = 1000000007;


void striker()
{
    int x, y;
    cin >> x >> y;
    int a = abs(x) + abs(y);
    if (x > 0 && y > 0)
        cout << 0 << " " << a << " " << a << " " << 0;
    else if (x > 0 && y < 0)
        cout << 0 << " " << -a << " " << a << " " << 0;
    else if (x < 0 && y > 0)
        cout << -a << " " << 0 << " " << 0 << " " << a;
    else
        cout << -a << " " << 0 << " " << 0 << " " << -a;
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