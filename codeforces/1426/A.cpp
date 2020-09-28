#include<bits/stdc++.h>
using namespace std;
#define int long long

void striker(int n,int x)
{
    if(n<=2)
    {
        cout<<1;
        return;
    }
    else
    {
        n=n-2;
        int res=(n/x);
        if(n%x!=0)
            res=res+1;
        cout<<res+1;
        return;
    }
}

int32_t main(){

    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    
    int t;
    cin>>t;
    while(t--)
    {
        int n,x;
        cin>>n>>x;
        striker(n,x);
        cout<<endl;
    }
     return 0;
}