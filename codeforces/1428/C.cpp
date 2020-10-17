#include<bits/stdc++.h>
using namespace std;
#define int long long

void striker()
{
    string s;
    cin>>s;
    if(s.size()==1)
    {
        cout<<1;
        return;
    }
    stack<char> p;
    p.push(s[0]);
    int count=0;
    for(int i=1;i<s.size();i++)
    {
        if((p.empty()==false) && ((p.top()=='A' && s[i]=='B') || (p.top()=='B' && s[i]=='B')))
        {
            count+=2;
            p.pop();
        }
        else
            p.push(s[i]);
    }
    cout<<p.size();
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
    for(int i=0;i<t;i++)
    {
        //cout<<"#Case: "<<i+1<<endl;
        striker();
        cout<<endl;
    }
     return 0;
}