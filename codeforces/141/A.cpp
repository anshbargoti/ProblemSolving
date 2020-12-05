#include<bits/stdc++.h>
using namespace std;
#define int long long

// const int MOD = 1000000007;

void striker()
{
    string s1,s2,s3;
    cin>>s1>>s2>>s3;
    if(s3.size()>s1.size()+s2.size())
    {
        cout<<"NO";
        return;
    }
    map<char,int> mp;
    for(int i=0;i<s1.size();i++)
        mp[s1[i]]++;
    for(int i=0;i<s2.size();i++)
        mp[s2[i]]++;
    for(int i=0;i<s3.size();i++)
        mp[s3[i]]--;
    for(auto x:mp)
    {
        if(x.second!=0)
        {
            cout<<"NO";
            return;
        }
    }
    cout<<"YES";
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