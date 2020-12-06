#include<bits/stdc++.h>
using namespace std;

//#define int long long
// const int MOD = 1000000007;

void striker()
{
    int n;
    cin>>n;
    vector<pair<int,int>> v;
    for(int i=0;i<7;i++)
    {
        int x;
        cin>>x;
        v.push_back({i,x});
    }
    int i=0;
    while(true)
    {
        n=n-v[i].second;
        if(n>0)
            i=(i+1)%7;
        else
            break;
    }
    cout<<v[i].first+1;
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