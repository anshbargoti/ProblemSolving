#include<bits/stdc++.h>
using namespace std;
pair<int,int> p[600000];

//#define int long long
// const int MOD = 1000000007;

void striker()
{
    int n;
    cin>>n;
    for(int i=0;i<2*n;i++)
    {
        cin>>p[i].first;
        p[i].second=i+1;
    }
    sort(p,p+2*n);
    for(int i=0;i<2*n;i+=2)
    {
        if(p[i].first!=p[i+1].first)
        {
            cout<<-1;
            return;
        }
    }
    for(int i=0;i<2*n;i+=2)
        cout<<p[i].second<<" "<<p[i+1].second<<"\n";
}

int32_t main(){

    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

//#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
//#endif
    
    int t=1;
//    cin>>t;
    for(int i=0;i<t;i++)
    {
        //cout<<"#Case: "<<i+1<<endl;
        striker();
        //cout<<endl;
    }
     return 0;
}