#include<bits/stdc++.h>
using namespace std;
#define int long long


//const int MOD = 1000000007;


void striker()
{
    int r, g, b;
    cin >> r >> g >> b;
    int maxi = INT_MIN;
    for (int i = 0; i < 3; i++)
    {
        if (r < i || g < i || b < i)
            break;
        maxi = max(maxi, i + (r - i) / 3 + (g - i) / 3 + (b - i) / 3);
    }
    cout << maxi;
}

int32_t main(){

    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    
    int t = 1;
//    cin>>t;
    for(int i=0;i<t;i++)
    {
        //cout<<"#Case: "<<i+1<<endl;
        striker();
        cout<<endl;
    }
     return 0;
}