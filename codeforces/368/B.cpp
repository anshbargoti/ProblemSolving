#include<bits/stdc++.h>
using namespace std;
int arr[100005];

//#define int long long
// const int MOD = 1000000007;


void striker()
{
    int n,m;
    cin>>n>>m;
    for(int i=1;i<=n;i++)
        cin>>arr[i];
    set<int> unq;
    for(int i=n;i>0;i--)
    {
        unq.insert(arr[i]);
        arr[i]=unq.size();
    }
    for(int i=0;i<m;i++)
    {
        int x;
        cin>>x;
        cout<<arr[x]<<endl;
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
    for(int i=0;i<t;i++)
    {
        //cout<<"#Case: "<<i+1<<endl;
        striker();
        //cout<<endl;
    }
     return 0;
}