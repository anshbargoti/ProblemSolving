#include<bits/stdc++.h>
using namespace std;
#define int long long

// const int MOD = 1000000007;

void striker()
{
    string s;
    cin>>s;
    int n=s.size();
    string b="14";
    string c="144";
    for(int i=0;i<n;)
    {
        if(s.substr(i,3)==c)
            i+=3;
        else if(s.substr(i,2)==b)
            i+=2;
        else if(s[i]=='1')
            i+=1;
        else
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