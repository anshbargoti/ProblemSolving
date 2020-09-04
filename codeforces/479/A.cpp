#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

void striker(int a,int b,int c)
{
    int mul=a*b*c;
    int sum=a+b+c;
    mul=max(mul,sum);
    if((a>=b && a>=c) || (b>=a && a>=c))
       mul=max(mul,a*(b+c));
    else if((c>=a && c>=b) || (b>=c && c>=a))
        mul=max(mul,(a+b)*c);

    cout<<mul; 
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
        int a,b,c;
        cin>>a>>b>>c;
        striker(a,b,c);
        cout<<endl;
    }
     return 0;
}
