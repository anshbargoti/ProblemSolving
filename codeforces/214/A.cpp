#include<bits/stdc++.h>
using namespace std;

//#define int long long
// const int MOD = 1000000007;

void striker()
{
    int n,m;
    cin>>n>>m;
    int ans=0;
    int b;
    for(int a=0;a*a<=n;a++)
    {
        for(int b=0;b*b<=m;b++)
        {
            if(a*a+b==n && a+b*b==m)
                ans++;
        }
    }
    cout<<ans;
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