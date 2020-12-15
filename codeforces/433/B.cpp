#include<bits/stdc++.h>
using namespace std;
#define int long long

// const int MOD = 1000000007;


void striker()
{
    int n;
    cin>>n;
    int arr[n+1]={0},brr[n+1]={0};
    for(int i=1;i<=n;i++)
    {
        cin>>arr[i];
        brr[i]=arr[i];
    }
    sort(brr,brr+n+1);
    for (int i=1;i<=n;i++)
    {
        arr[i]+=arr[i-1];
        brr[i]+=brr[i-1];
    }
    int m;
    cin>>m;
    while(m--)
    {
        int type,l,r;
        cin>>type>>l>>r;
        if(type==1)
            cout<<arr[r]-arr[l-1]<<endl;
        else
            cout<<brr[r]-brr[l-1]<<endl;
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
//    cin>>t;
    for(int i=0;i<t;i++)
    {
        //cout<<"#Case: "<<i+1<<endl;
        striker();
        //cout<<endl;
    }
     return 0;
}