#include<bits/stdc++.h>
using namespace std;

//#define int long long
// const int MOD = 1000000007;


bool sorting(const pair<int,int> &a,const pair<int,int> &b)
{
    return (a.first==b.first?a.second<b.second:a.first>b.first);
}

void striker()
{
    int n,k;
    cin>>n>>k;
    pair<int,int> p[n];
    for(int i=0;i<n;i++)
        cin>>p[i].first>>p[i].second;
    sort(p,p+n,sorting);
    int a=p[k-1].first,b=p[k-1].second,count=0;
    for(int i=0;i<n;i++)
    {
        if(p[i].first==a && p[i].second==b)
            count++;
    }
    cout<<count;
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