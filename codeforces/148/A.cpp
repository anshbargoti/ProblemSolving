#include<bits/stdc++.h>
using namespace std;

// const int MOD = 1000000007;
//#define int long long

void striker()
{
    int k,l,m,n,d;
    cin>>k>>l>>m>>n>>d;
    int count=0;
    for(int i=1;i<=d;i++)
    {
        if(i%k==0 || i%l==0 || i%m==0 || i%n==0)
            continue;
        else
            count++;
    }
    cout<<d-count;
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