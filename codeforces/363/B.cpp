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
    {
        cin>>arr[i];
        if(i>0)
            arr[i]+=arr[i-1];
    }
    for(int i=0;i<k;i++)
        prefix_sum[i]=arr[i];
    for(int i=k,j=0;i<n;i++,j++)
        prefix_sum[i]=arr[i]-arr[j];
    int mini=min_element(prefix_sum+k-1,prefix_sum+n)-prefix_sum;

    // mini_index=mini+1
    // gap=k-1

    cout<<(mini+1)-(k-1);
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