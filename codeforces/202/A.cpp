#include<bits/stdc++.h>
using namespace std;

//#define int long long
//const int MOD = 1000000007;


void striker()
{
    string s;
    cin>>s;
    char ch=s[0];
    int count=1;
    for(int i=1;i<s.size();i++)
    {
        if(ch<s[i])
        {
            ch=s[i];
            count=1;
        }
        else if(ch==s[i])
            count++;
    }
    for(int i=0;i<count;i++)
        cout<<ch;
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