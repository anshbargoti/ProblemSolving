#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long
 
void striker(int a,int b,int c)
{
    int res=a+b+c;
    res=max(res,a*b*c);
    res=max(res,(a+b)*c);
    res=max(res,a*(b+c));
    cout<<res; 
}
 
int32_t main(){
 
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
 
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    
    int t=1;
    //cin>>t;
    while(t--)
    {
        int a,b,c;
        cin>>a>>b>>c;
        striker(a,b,c);
        cout<<endl;
    }
     return 0;
}