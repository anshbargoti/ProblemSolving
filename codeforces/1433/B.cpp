#include<bits/stdc++.h>
using namespace std;
#define int long long

void striker()
{
    int n;
    cin>>n;
    int arr[n];
    int count=0;
    bool flag=false;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        if(arr[i]==1)
            flag=true;
        if(flag && arr[i]==0)
            count++;
    }
    for(int i=n-1;i>=0;i--)
    {
        if(arr[i]==1)
            break;
        count--;
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
    
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        //cout<<"#Case: "<<i+1<<endl;
        striker();
        cout<<endl;
    }
     return 0;
}