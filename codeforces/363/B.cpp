#include<bits/stdc++.h>
using namespace std;
#define int long long

// const int MOD = 1000000007;

void striker()
{
    int n,k;
    cin>>n>>k;
    int arr[n];
    int prefix_sum[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    prefix_sum[0]=arr[0];
    if(k==n)
    {
        cout<<1;
        return;
    }
    for(int i=1;i<n;i++)
        prefix_sum[i]=arr[i]+prefix_sum[i-1];
    // for(int i=0;i<n;i++)
    //     cout<<prefix_sum[i]<<" ";
    int index=0,mini=prefix_sum[k-1],j=0;
    for(int i=k;i<n;i++)
    {
        if(mini>prefix_sum[i]-prefix_sum[j])
        {
            mini=prefix_sum[i]-prefix_sum[j];
            index=j+1;
        }
        j++;
    }
    cout<<index+1;
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