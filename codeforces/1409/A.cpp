#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

void striker(int a,int b)
{
    if(b==a)
    {
        cout<<0;
        return;
    }
    int temp=abs(b-a);
    if(temp%10==0)
        cout<<temp/10;
    else
        cout<<temp/10+1;
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
    while(t--)
    {
        int a,b;
        cin>>a>>b;
        striker(a,b);
        cout<<endl;
    }
     return 0;
}