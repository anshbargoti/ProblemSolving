#include<bits/stdc++.h>
using namespace std;
#define int long long

// const int MOD = 1000000007;

void striker()
{
    string s;
    cin>>s;
    int n=s.size();
    for(int i=0;i<n;i++)
    {
        if(s[i]!='1' && s[i]!='4')
        {
            cout<<"NO";
            return;
        }
    }
    if(s[0]!='4' && s.find("444")==string::npos)
        cout<<"YES";
    else
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