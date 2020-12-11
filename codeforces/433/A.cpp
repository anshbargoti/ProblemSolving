#include<bits/stdc++.h>
using namespace std;

//#define int long long
// const int MOD = 1000000007;

void striker()
{
    int n;
    cin>>n;
    int a1=0,a2=0;
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        if(x==100)
            a1++;
        else
            a2++;
    }
    if(n&1==1 && (a1==0 || a2==0))
        cout<<"NO";
    else if(2*(a1/2)+a2==n)
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
    for(int i=0;i<t;i++)
    {
        //cout<<"#Case: "<<i+1<<endl;
        striker();
        cout<<endl;
    }
     return 0;
}