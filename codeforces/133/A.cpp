#include<bits/stdc++.h>
using namespace std;

//#define int long long
// const int MOD = 1000000007;

void striker()
{
    string p;
    cin>>p;
    for(int i=0;i<p.size();i++)
    {
        if(p[i]=='H' || p[i]=='Q' || p[i]=='9')
        {
            cout<<"YES";
            return;
        }
    }
    cout<<"NO";
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