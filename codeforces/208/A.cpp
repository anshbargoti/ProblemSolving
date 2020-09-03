#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

void striker(string s)
{
    string res;
    for(int i=0;i<s.size()-2;i++)
    {
        if(s[i]=='W' && s[i+1]=='U' && s[i+2]=='B')
        {
            s[i]='.';
            s[i+1]='.';
            s[i+2]='.';
        }
    }
    for(int i=0;i<s.size();i++)
    {
        if(s[i]!='.')
        {
            cout<<s[i];
            if(s[i+1]=='.')
                cout<<" ";
        }
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
    //cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        if(s.size()<3)
            cout<<s;
        else
            striker(s);
        cout<<endl;
    }
     return 0;
}
