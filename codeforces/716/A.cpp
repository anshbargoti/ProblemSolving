#include<bits/stdc++.h>
using namespace std;
#define int long long

//const int MOD = 1000000007;


void striker()
{
    int n,c;
    cin>>n>>c;
    int arr[n+1];
    arr[0]=0;
    for(int i=1;i<=n;i++)
        cin>>arr[i];
    int count=0;
    for(int i=1;i<=n;i++)
    {
        if(arr[i]-arr[i-1]<=c)
            count++;
        else
            count=1;
    }
    cout<<count;
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