#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

void striker(int n)
{
    if(n%2==0 && n>2)
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
    while(t--)
    {
        int n;
        cin>>n;
        striker(n);
        cout<<endl;
    }
     return 0;
}