#include<bits/stdc++.h>
using namespace std;

//#define int long long
// const int MOD = 1000000007;

void striker()
{
    int n;
    cin>>n;
    for(int i=0,j=-n;i<2*n+1;i++,j++)
    {
        for(int k=0;k<abs(j);k++)
            cout<<"  ";
        for(int k=0;k<(n-abs(j));k++)
            cout<<k<<" ";
        for(int k=(n-abs(j));k>0;k--)
            cout<<k<<" ";
        cout<<0<<endl;
    }
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