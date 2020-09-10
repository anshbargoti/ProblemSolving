#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

void striker(int n,int v)
{
    int x,y;
    set<int> us;
    int count;
    for(int i=0;i<n;i++)
    {
        count=0;
        cin>>x;
        for(int j=0;j<x;j++)
        {
            cin>>y;
            if(v>y && count==0)
            {
                us.insert(i+1);
                count++;
            }
        }
    }
    cout<<us.size()<<endl;
    for (auto it=us.begin();it!=us.end();it++) 
        cout<<*it<<" ";
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
    while(t--)
    {
        int n,v;
        cin>>n>>v;
        striker(n,v);
        cout<<endl;
    }
     return 0;
}