#include<bits/stdc++.h>
using namespace std;
#define int long long

// const int MOD = 1000000007;

void striker()
{
    string s;
    cin>>s;
    int count[26]={0};
    for(int i=0;i<s.size();i++)
        count[s[i]-'a']++;
    int odd_c=0;
    for(int i=0;i<26;i++)
    {
        if(count[i]&1==1)
            odd_c++;
    }
    if(odd_c<2 || odd_c&1==1)
        cout<<"First";
    else
        cout<<"Second";
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