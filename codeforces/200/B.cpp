#include<bits/stdc++.h>
using namespace std;

// const int MOD = 1000000007;
//#define int long long

void striker()
{
    int n;
    cin>>n;
    int x;
    double sum=0;
    for(int i=0;i<n;i++)
    {
        cin>>x;
        sum+=x;
    }
    cout<<fixed<<setprecision(12)<<sum/n;

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