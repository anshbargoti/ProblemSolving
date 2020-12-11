#include<bits/stdc++.h>
using namespace std;

//#define int long long
// const int MOD = 1000000007;

void striker()
{
    int n;
    cin>>n;
    int mini=INT_MAX,maxi=INT_MIN;
    vector<pair<int,int>> v;
    for(int i=0;i<n;i++)
    {
        int x,y;
        cin>>x>>y;
        mini=min(x,mini);
        maxi=max(y,maxi);
        v.push_back({x,y});
    }
    for(int i=0;i<n;i++)
    {
        if(v[i].first==mini && v[i].second==maxi)
        {
            cout<<i+1;
            return;
        }
    }
    cout<<-1;
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