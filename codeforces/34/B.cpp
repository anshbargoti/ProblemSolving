#include<bits/stdc++.h>
using namespace std;

//#define int long long
// const int MOD = 1000000007;

void striker()
{
    int n,m;
    cin>>n>>m;
    vector<int> v;
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        if(x<0)
            v.push_back(x);
    }
    int sum=0;
    sort(v.begin(),v.end());
    for(int i=0;i<m && i<v.size();i++)
        sum+=abs(v[i]);
    cout<<sum;
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