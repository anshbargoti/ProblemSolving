#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long
 
void striker(int n,int m,int a,int b)
{
    if(m*a<=b)
        cout<<n*a;
    else
        cout<<(n/m)*b+min(b,(n%m)*a);
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
        int n,m,a,b;
        cin>>n>>m>>a>>b;
        striker(n,m,a,b);
        cout<<endl;
    }
     return 0;
}