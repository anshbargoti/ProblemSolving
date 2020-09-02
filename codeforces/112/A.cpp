#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

void striker(string s1,string s2)
{
    transform(s1.begin(), s1.end(), s1.begin(), ::tolower);
    transform(s2.begin(), s2.end(), s2.begin(), ::tolower);
    int n=s1.size();
    for(int i=0;i<n;i++)
    {
        if(s1[i]<s2[i])
        {
            cout<<-1;
            return;
        }
        else if(s1[i]>s2[i])
        {
            cout<<1;
            return;
        }
    }
    cout<<0;
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
    while(t--)
    {
        // int n;
        // cin>>n;
        string s1,s2;
        cin>>s1>>s2;
        striker(s1,s2);
        cout<<endl;
    }
     return 0;
}