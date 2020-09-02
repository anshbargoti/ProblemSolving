#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

void striker(int n)
{
    if(n%4==0 || n%7==0 || n%47==0 || n%74==0 || n%477==0 || n%774==0 || n%747==0 || n%447==0 || n%474==0 || n%744==0)
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
        int n;
        cin>>n;
        striker(n);
        cout<<endl;
    }
     return 0;
}