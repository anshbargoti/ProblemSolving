#include<bits/stdc++.h>
using namespace std;

//#define int long long
// const int MOD = 1000000007;

void striker()
{
    int n,m;
    cin>>n>>m;
    if(n<m)
    {
        for(int i=0;i<n;i++)
            cout<<"GB";
        for(int i=0;i<m-n;i++)
            cout<<"G";
    }
    else
    {
        for(int i=0;i<m;i++)
            cout<<"BG";
        for(int i=0;i<n-m;i++)
            cout<<"B";
    }
}

int32_t main(){

    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    
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