#include<bits/stdc++.h>
using namespace std;
#define int long long

void striker()
{
    string s;
    cin>>s;
    int count_lower=0,count_upper=0;
    for(char ch:s)
    {
        if(ch>='A' && ch<='Z')
            count_upper++;
        else
            count_lower++;
    }
    if(count_upper>count_lower)
    {
        transform(s.begin(),s.end(),s.begin(),::toupper);
        cout<<s;
    }
    else
    {
        transform(s.begin(),s.end(),s.begin(),::tolower);
        cout<<s;
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