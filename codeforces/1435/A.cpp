#include<bits/stdc++.h>
using namespace std;
#define int long long

void striker()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    int b[n];
    for(int i=0;i<n-1;i+=2)
        b[i+1]=-1*arr[i];
    for(int i=0;i<n-1;i+=2)
        b[i]=arr[i+1];
    for(int i=0;i<n;i++)
        cout<<b[i]<<" ";
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