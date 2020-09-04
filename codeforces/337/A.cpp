#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

void striker(int n,int m,int arr[])
{
    sort(arr,arr+m);
    int res=INT_MAX;
    for(int i=0;i<=m-n;i++)
        res=min(res,arr[i+(n-1)]-arr[i]);
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
        int n,m;
        cin>>n>>m;
        int arr[m];
        for(int i=0;i<m;i++)
            cin>>arr[i];
        striker(n,m,arr);
        cout<<endl;
    }
     return 0;
}
