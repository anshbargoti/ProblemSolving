#include<bits/stdc++.h>
using namespace std;


//#define int long long
//const int MOD = 1000000007;


void striker()
{
    int n, m;
    cin >> n >> m;
    bool vistd[n + 1] = {false};
    for (int i = 0; i < m; i++)
    {
        int x, y;
        cin >> x >> y;
        vistd[x] = true;
        vistd[y] = true;
    }
    cout << n - 1 << "\n";
    for (int i = 1; i <= n; i++)
    {
        if (!vistd[i])
        {
            for (int j = 1; j <= n; j++)
            {
                if (i != j)
                    cout << i << " " << j << "\n";
            }
            return;
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
//    cin>>t;
    for(int i=0;i<t;i++)
    {
        //cout<<"#Case: "<<i+1<<endl;
        striker();
        //cout<<endl;
    }
     return 0;
}