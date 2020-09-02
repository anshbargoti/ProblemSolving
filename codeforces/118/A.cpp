#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

void striker(string s)
{
    transform(s.begin(), s.end(), s.begin(), ::tolower);
    for(int i=0;i<s.size();i++)
    {
        if(s[i]!='a' && s[i]!='e' && s[i]!='i' && s[i]!='o' && s[i]!='u' && s[i]!='y')
            cout<<"."<<s[i];
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