#include<bits/stdc++.h>
using namespace std;
int arr[1500];


//#define int long long
// const int MOD = 1000000007;


void striker()
{
    int n;
    cin>>n;
    int res=INT_MIN;
    for(int i=0;i<n;i++)
    {
        int x,y;
        cin>>x>>y;
        int time=60*x+y;
        arr[time]++;
        res=max(arr[time],res);
    }
    cout<<res;
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