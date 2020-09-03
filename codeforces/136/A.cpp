#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

void striker(int n,int arr[])
{
    int res[n+1]={0};
    for(int i=1;i<n+1;i++)
    {
        res[arr[i]]=i;
    }
    for(int i=1;i<n+1;i++)
        cout<<res[i]<<" ";
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
        int n;
        cin>>n;
        int arr[n+1]={0};
        for(int i=1;i<n+1;i++)
            cin>>arr[i];
        striker(n,arr);
        cout<<endl;
    }
     return 0;
}