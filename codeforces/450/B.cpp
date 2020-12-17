#include<bits/stdc++.h>
using namespace std;
const int MOD = 1000000007;

//#define int long long

void striker()
{
    int f1,f2,n;
    cin>>f1>>f2>>n;
    int ans;
    switch(n%6)
    {
        case 1:
            ans=f1;
            break;
        case 2:
            ans=f2;
            break;
        case 3:
            ans=f2-f1;
            break;
        case 4:
            ans=-f1;
            break;
        case 5:
            ans=-f2;
            break;
        case 0:
            ans=f1-f2;
            break;
    }
    ans=ans%MOD;
    cout<<(ans<0?ans+MOD:ans);
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