#include<bits/stdc++.h>
using namespace std;
#define int long long

void striker()
{
    string str;
    cin>>str;
    int count=0;
    for(char ch:str)
    {
        if(ch=='4' || ch=='7')
            count++;
    }
    if(count==4 || count==7)
        cout<<"YES";
    else
        cout<<"NO";
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