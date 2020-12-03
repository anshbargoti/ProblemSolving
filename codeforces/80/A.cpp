#include<bits/stdc++.h>
using namespace std;
//#define int long long


bool check_prime(int n)
{
    if(n<=3) 
        return true; 
    if(n%2==0 || n%3==0)
        return false;
  
    for(int i=5;i*i<=n;i++)
    { 
        if(n%i==0) 
            return false;
    }
    return true; 
}

void striker()
{
    int n,m;
    cin>>n>>m;
    for(int i=n+1;i<=m;i++)
    {
        if(check_prime(i))
        {
            cout<<(i==m?"YES":"NO");
            return;
        }
    }
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
    for(int i=0;i<t;i++)
    {
        //cout<<"#Case: "<<i+1<<endl;
        striker();
        cout<<endl;
    }
     return 0;
}