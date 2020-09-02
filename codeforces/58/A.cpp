#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

void striker(string s)
{
    string str="hello";
    int count=0,j=0;
    for(int i=0;i<s.size();i++)
    {
        if(s[i]==str[j])
        {
            j++;
            count++;
        }
    }
    if(count==5)
    {
        cout<<"YES";
        return;
    }
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
    while(t--)
    {
        // int n;
        // cin>>n;
        string s;
        cin>>s;
        striker(s);
        cout<<endl;
    }
     return 0;
}