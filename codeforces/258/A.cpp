#include<bits/stdc++.h>
using namespace std;

//#define int long long
// const int MOD = 1000000007;

void striker()
{
    string s;
    cin>>s;
    int flag=false;
    if(s.find('0')==string::npos)
        cout<<s.substr(1,s.size()-1);
    else
    {
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='0' && flag==false)
            {
                flag=true;
                continue;
            }
            cout<<s[i];
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
//    cin>>t;
    for(int i=0;i<t;i++)
    {
        //cout<<"#Case: "<<i+1<<endl;
        striker();
        cout<<endl;
    }
     return 0;
}