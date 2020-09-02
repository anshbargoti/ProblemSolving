#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

void striker(string s)
{
    int n=s.size();
    if(n>10)
        cout<<s[0]<<(n-2)<<s[n-1];
    else
        cout<<s;
}

int32_t main(){

    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    
    int t;
    cin>>t;
    while(t--)
    {
        // int n;
        // cin>>n;
        string s;
        cin>>s;
        striker(s);
        cout<<endl;
    }
     return 0;
}