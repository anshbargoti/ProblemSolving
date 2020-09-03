#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

void striker(int m,int n)
{
    if(m%2==0)
        cout<<"Malvika";
    else
        cout<<"Akshat";
}

int32_t main(){

    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    
    int t=1;
    //cin>>t;
    while(t--)
    {
        int n,m;
        cin>>n>>m;
        if(m<n) 
            striker(m,n);
        else
            striker(n,m);
        cout<<endl;
    }
     return 0;
}


// 1st move will make m*n to (m-1)(n-1)