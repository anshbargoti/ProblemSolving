#include<bits/stdc++.h>
using namespace std;
#define int long long

// const int MOD = 1000000007;

void striker()
{
    int n,m;
    cin>>n>>m;
    int time=0;
    int x;
    cin>>x;
    time=x-1;
    for(int i=1;i<m;i++)
    {
        int y;
        cin>>y;
        if(x<=y)
            time+=y-x;
        else
            time+=n-x+y;
        x=y;
    }
    cout<<time;
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