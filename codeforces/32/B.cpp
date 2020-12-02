#include<bits/stdc++.h>
using namespace std;
#define int long long

void striker()
{
    string code;
    cin>>code;
    int size=code.length();
    for(int i=0;i<size;i++)
    {
        if(code[i]=='.')
            cout<<0;
        else if(code[i]=='-' && code[i+1]=='.')
        {
            cout<<1;
            i++;
        }
        else
        {
            cout<<2;
            i++;
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