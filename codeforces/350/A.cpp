#include<bits/stdc++.h>
using namespace std;

//#define int long long
// const int MOD = 1000000007;

void striker()
{
    int n,m;
    cin>>n>>m;
    int mini_p=101;
    int maxi_p=-1;
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        mini_p=min(mini_p,x);
        maxi_p=max(maxi_p,x);
    }
    int mini_f=101;
    for(int i=0;i<m;i++)
    {
        int x;
        cin>>x;
        mini_f=min(mini_f,x);
    }
    if(2*mini_p<mini_f && maxi_p<mini_f)
        cout<<(2*mini_p<=maxi_p?maxi_p:2*mini_p);
    else
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