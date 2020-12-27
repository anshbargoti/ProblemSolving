#include<bits/stdc++.h>
using namespace std;
#define int long long


//const int MOD = 1000000007;


void striker()
{
    int n, m;
    cin >> n >> m;
    int arr[n+1] = {0};
    for (int i = 1; i <= n; i++)
        cin >> arr[i];
    int type2 = 0, type;
    for (int i = 0; i < m; i++)
    {
        cin >> type;
        if (type == 1)
        {
            int v, x;
            cin >> v >> x;
            arr[v] = x - type2;
        }
        else if (type == 2)
        {
            int y;
            cin >> y;
            type2 += y;
        }
        else
        {
            int q;
            cin >> q;
            cout << arr[q] + type2 << "\n";
        }
    }
}

int32_t main(){

    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    
    int t = 1;
//    cin >> t;
    for(int i=0;i<t;i++)
    {
        //cout<<"#Case: "<<i+1<<endl;
        striker();
        //cout<<endl;
    }
     return 0;
}