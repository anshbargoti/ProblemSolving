#include<bits/stdc++.h>
using namespace std;
#define int long long

void striker()
{
    int n,t;
    cin>>n>>t;
    string s;
    cin>>s;
    while(t--)
    {
        for(int i=1;i<n;i++)
        {
            if(s[i]=='G' && s[i-1]=='B')
            {
                swap(s[i],s[i-1]);
                i++;
            }
        }
    }
    cout<<s;
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