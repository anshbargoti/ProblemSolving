#include<bits/stdc++.h>
using namespace std;
#define int long long

// const int MOD = 1000000007;

void striker()
{
    int n;
    cin>>n;
    int x;
    int pos[n+1]={0};
    for(int i=0;i<n;i++)
    {
        cin>>x;
        pos[x]=i+1;
    }
    int m;
    cin>>m;
    int v=0,p=0;
    for(int i=0;i<m;i++)
    {
        cin>>x;
        v+=pos[x];
        p+=n-pos[x]+1;
    }
    cout<<v<<" "<<p;
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