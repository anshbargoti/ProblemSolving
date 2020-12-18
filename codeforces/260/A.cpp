#include<bits/stdc++.h>
using namespace std;


//#define int long long
//const int MOD = 1000000007;


void striker()
{
    int a,b,n;
    cin>>a>>b>>n;
    bool flag=false;
    for(int i=0;i<10;i++)
    {
        if((10*a+i)%b==0)
        {
            cout<<10*a+i;
            flag=true;
            break;
        }
    }
    if(flag)
    {
        for(int i=1;i<n;i++)
            cout<<0;
    }
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
