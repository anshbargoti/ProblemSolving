#include<bits/stdc++.h>
using namespace std;
#define int long long

// const int MOD = 1000000007;

void striker()
{
    int n;
    cin>>n;
    int arr[n];
    int maxi,mini;
    int count=0;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        if(i==0)
        {
            maxi=arr[0];
            mini=arr[0];
        }
        if(i>0 && arr[i]>maxi)
        {
            maxi=arr[i];
            count++;
        }
        if(i>0 && arr[i]<mini)
        {
            mini=arr[i];
            count++;
        }
    }
    cout<<(n==0?0:count);
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