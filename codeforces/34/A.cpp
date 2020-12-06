#include<bits/stdc++.h>
using namespace std;

//#define int long long
// const int MOD = 1000000007;

void striker()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    int mini=INT_MAX;
    int l=0,r=1;
    for(int i=1;i<n;i++)
    {
        if(mini>abs(arr[i]-arr[i-1]))
        {
            mini=abs(arr[i]-arr[i-1]);
            l=i,r=i+1;
        }
    }
    if(mini>abs(arr[n-1]-arr[0]))
    {
        l=n;
        r=1;
    }
    cout<<l<<" "<<r;
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