#include<bits/stdc++.h>
using namespace std;

//#define int long long
// const int MOD = 1000000007;

void striker()
{
    int k;
    cin>>k;
    string s,res;
    cin>>s;
    sort(s.begin(),s.end());
    for(int i=0;i<s.size();)
    {
        if(s[i]!=s[i+k-1])
        {
            cout<<-1;
            return;
        }
        res+=s[i];
        i=i+k;
    }
    for(int i=0;i<k;i++)
        cout<<res;
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