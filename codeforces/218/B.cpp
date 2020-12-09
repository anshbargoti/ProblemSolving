#include<bits/stdc++.h>
using namespace std;

//#define int long long
// const int MOD = 1000000007;

void striker()
{
    int n,m;
    cin>>n>>m;
    priority_queue<int> pq_max;
    priority_queue<int,vector<int>,greater<int>> pq_min;
    for(int i=0;i<m;i++)
    {
        int x;
        cin>>x;
        pq_max.push(x);
        pq_min.push(x);
    }
    int x,mini=0,maxi=0;
    for(int i=0;i<n;i++)
    {
        x=pq_max.top();
        maxi+=x;
        pq_max.pop();
        if(x-1>0)
            pq_max.push(x-1);
        x=pq_min.top();
        mini+=x;
        pq_min.pop();
        if(x-1>0)
            pq_min.push(x-1);
    }
    cout<<maxi<<" "<<mini;
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