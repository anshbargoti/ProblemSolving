#include<bits/stdc++.h>
using namespace std;
#define int long long

void striker()
{
    string s;
    cin>>s;
    if(islower(s[0]))
    {
        char ch=toupper(s[0]);
        cout<<ch;
    }
    else
        cout<<s[0];
    for(int i=1;i<s.size();i++)
        cout<<s[i];
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