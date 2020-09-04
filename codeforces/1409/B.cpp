#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

void striker(int a,int b,int x,int y,int n)
{
    int diffa=a-x;
    int diffb=b-y;
    int a1=a,b1=b,n1=n;
    a1=a1-min(diffa,n1);
    n1=n1-min(diffa,n1);
    if(n1>0)
    {
        b1=b1-min(diffb,n1);
    }
    int mini=a1*b1;

    b=b-min(diffb,n);
    n=n-min(diffb,n);
    if(n>0)
    {
        a=a-min(diffa,n);
    }
    mini=min(mini,a*b);
    cout<<mini;
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
        int a,b,x,y,n;
        cin>>a>>b>>x>>y>>n;
        striker(a,b,x,y,n);
        cout<<endl;
    }
     return 0;
}