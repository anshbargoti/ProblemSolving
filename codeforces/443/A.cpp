#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long
 
void striker(string s)
{
    unordered_set<char> us;
    for(int i=1;i<s.size()-1;i+=3)
        us.insert(s[i]);
    cout<<us.size();
}
int32_t main(){
 
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
 
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    
    int t=1;
    //cin>>t;
    while(t--)
    {
        string s;
        getline(cin,s);
        striker(s);
        cout<<endl;
    }
     return 0;
}