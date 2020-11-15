#include<bits/stdc++.h>
using namespace std;
#define int long long
 
void striker()
{
    int a,b,c;
    cin>>a>>b>>c;
    cout<<max(a,max(b,c))+1;
}
 
int32_t main(){
 
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
 
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        //cout<<"#Case: "<<i+1<<endl;
        striker();
        cout<<endl;
    }
    return 0;
}