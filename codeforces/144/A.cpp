#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

void striker(int n,int arr[],int index_min,int index_max)
{
    if(index_min<index_max) 
        cout<<(index_max+(n-1-index_min)-1);
    else
        cout<<(index_max+(n-1-index_min));
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
        int arr[n];
        int maxi=INT_MIN,index_max;
        int mini=INT_MAX,index_min;
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
            if(arr[i]>maxi)
            {
                maxi=arr[i];
                index_max=i;
            }
            if(arr[i]<=mini)
            {
                mini=arr[i];
                index_min=i;
            }
        }
        striker(n,arr,index_min,index_max);
        cout<<endl;
    }
     return 0;
}