#include<bits/stdc++.h>
using namespace std;
const int MOD = 1000000007;

//#define int long long

void striker()
{
    int f1,f2;
    cin>>f1>>f2;
    int n;
    cin>>n;
    int arr[6]={f1-f2,f1,f2,f2-f1,-f1,-f2};
    cout<<(arr[n%6]%MOD+MOD)%MOD;
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
