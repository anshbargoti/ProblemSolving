#include<bits/stdc++.h>
using namespace std;

// const int MOD = 1000000007;
//#define int long long


void striker()
{
    int n;
    cin>>n;
    if(n&1)
    {
        cout<<-1;
        return;
    }
    for(int i=1;i<=n;i+=2)
        cout<<i+1<<" "<<i<<" ";
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