#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

void striker(int n,int k)
{
    int arr[n];
    int ele;
    for(int i=0;i<n;i++)
    {
        cin>>ele;
        arr[i]=5-ele;
    }
    sort(arr,arr+n,greater<int>());
    int count=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]>=k)
            count++;
        else
            break;
    }
    
    cout<<count/3;
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
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        striker(n,k);
        cout<<endl;
    }
     return 0;
}