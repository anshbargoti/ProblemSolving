#include<bits/stdc++.h>
using namespace std;
#define int long long

// const int MOD = 1000000007;


bool check_prime(int n)
{
    if(n%2==0 || n%3==0)
        return false;
    for(int i=5;i*i<=n;i+=6)
    {
        if(n%i==0 || n%(i+2)==0)
            return false;
    }
    return true;
}

void striker()
{
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        int a=sqrt(x);
        if(x==4 || x==9)
            cout<<"YES";
        else if(x<25)
            cout<<"NO";
        else if(a*a==x)
        {
            cout<<(check_prime(a)?"YES":"NO");
        }
        else
            cout<<"NO";
        cout<<'\n';
    }
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
        //cout<<endl;
    }
     return 0;
}