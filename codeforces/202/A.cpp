#include<bits/stdc++.h>
using namespace std;

//#define int long long
//const int MOD = 1000000007;


void striker()
{
    string s;
    cin>>s;
    sort(s.begin(),s.end());
    for(int i=s.size()-1;i>=0;i--)
    {
        if(s[i]==s[s.size()-1])
            cout<<s[i];
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