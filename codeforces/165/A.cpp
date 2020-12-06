#include<bits/stdc++.h>
using namespace std;

//#define int long long
// const int MOD = 1000000007;

void striker()
{
    int n;
    cin>>n;
    vector<pair<int,int>> v;
    for(int i=0;i<n;i++)
    {
        int x,y;
        cin>>x>>y;
        v.push_back({x,y});
    }
    int ans=0;
    for(auto x:v)
    {
        bool l=false,r=false,u=false,d=false;
        for(auto y:v)
        {
            if(x.first>y.first && x.second==y.second) r=true;
            if(x.first<y.first && x.second==y.second) l=true;
            if(x.first==y.first && x.second<y.second) d=true;
            if(x.first==y.first && x.second>y.second) u=true;
        }
        if(l && r && u && d)
            ans++;
    }
    cout<<ans;
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