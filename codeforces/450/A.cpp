#include<bits/stdc++.h>
using namespace std;

//#define int long long
// const int MOD = 1000000007;

void striker()
{
    int n,m;
    cin>>n>>m;
    queue<pair<int,int>> q;
    for(int i=1;i<=n;i++)
    {
        int x;
        cin>>x;
        q.push({x,i});
    }
    while(q.size()!=1)
    {
        pair<int,int> p=q.front();
        q.pop();
        p.first-=m;
        if(p.first>0)
            q.push(p);
    }
    cout<<q.front().second;
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