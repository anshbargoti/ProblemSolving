#include<bits/stdc++.h>
using namespace std;

//#define int long long
// const int MOD = 1000000007;

void striker()
{
    string s;
    cin>>s;
    int count=0;
    int _h,_e,_l,_o;
    _h=_e=_l=_o=0;
    for(int i=0;i<s.size();i++)
    {
        if(s[i]=='h')
            _h=1;
        else if(s[i]=='e' && _h==1)
            _e=1;
        else if(s[i]=='l' && (_e==1 && _l<2))
            _l++;
        else if(s[i]=='o' && _l==2)
            _o=1;
    }
    cout<<(_h+_e+_l+_o==5?"YES":"NO");
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