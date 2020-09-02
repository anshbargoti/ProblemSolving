#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

void striker(string s)
{
    string str="";
    std::map<char, int> mp;
    for(int i=0;i<s.size();i++)
    {
        if(s[i]!='+')
            mp[s[i]]++;
    }
    for(auto ch:mp)
    {
        int k=ch.second;
        while(k--)
        {
            str+=ch.first;
            str+="+";
        }
    }
    for(int i=0;i<str.size()-1;i++)
        cout<<str[i];
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