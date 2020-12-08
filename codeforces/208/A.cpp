#include<bits/stdc++.h>
using namespace std;

//#define int long long
// const int MOD = 1000000007;

void striker()
{
    string s;
    cin>>s;
    int index=0;
    while(true)
    {
        index=s.find("WUB",index);
        if(index==string::npos)
            break;
        s.replace(index,3," ");
        index+=1;
    }
    cout<<s;
    // for(int i=0;i<s.size();i++)
    // {
    //     if(s[i]!=' ')
    //     {
    //         cout<<s[i];
    //         if(s[i+1]==' ')
    //             cout<<" ";
    //     }
    // }
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