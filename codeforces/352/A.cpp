#include<bits/stdc++.h>
using namespace std;
#define int long long

// const int MOD = 1000000007;

void striker()
{
    int n;
    cin>>n;
    int five=0,zero=0;
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        x==5?++five:++zero;
    }
    five=(five/9)*9;
    if(five==0 || zero==0)
        zero==0?cout<<-1:cout<<0;
    else
    {
        while(five--)
            cout<<5;
        while(zero--)
            cout<<0;
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