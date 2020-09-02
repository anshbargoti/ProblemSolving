#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

void striker(int n,int arr[],int sum)
{
    sort(arr,arr+n,greater<int>());
    int count=0,curr=0;
    for(int i=0;i<n;i++)
    {
        curr+=arr[i];
        count++;
        if(curr>sum/2){
            cout<<count;
            return;
        }
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
    while(t--)
    {
        int n;
        cin>>n;
        int arr[n];
        int sum=0;
        for(int i=0;i<n;i++){
            cin>>arr[i];
            sum+=arr[i];
        }
        striker(n,arr,sum);
        cout<<endl;
    }
     return 0;
}