#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long
 
void striker(int n,int k)
{
    if(k<=n)
        cout<<2*k-1;
    else
    {
        k=k-n;
        cout<<2*k;
    }
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
        int n,k;
        cin>>n>>k;
        n=(n+1)/2;
        striker(n,k);
        cout<<endl;
    }
     return 0;
}