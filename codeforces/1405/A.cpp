#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

void striker(int n,int arr[])
{
    reverse(arr,arr+n);
    for(int i=0;i<n;i++)
        cout<<arr[i]<<" ";
}

int32_t main(){

    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++)
            cin>>arr[i];
        striker(n,arr);
        cout<<endl;
    }
     return 0;
}