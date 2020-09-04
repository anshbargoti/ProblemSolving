#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

void striker(int n)
{
    if(n>=0)
    {
        cout<<n;
        return;
    }
    int a=(-n)%10;
    int b=(-n/10)%10;
    if(a>=b)
        cout<<n/10;
    else
        cout<<(n/100)*10-a;
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
        int n;
        cin>>n;
        striker(n);
        cout<<endl;
    }
     return 0;
}