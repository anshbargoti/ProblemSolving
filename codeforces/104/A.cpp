#include<bits/stdc++.h>
using namespace std;

//#define int long long
//const int MOD = 1000000007;


void striker()
{
    int n;
    cin >> n;
    if(n > 21 || n < 11)
    {
        cout<<0;
        return;
    }
    int arr[12] = {0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 4, 1};
    int ans = 4*arr[n-10];
    cout << (n == 20 ? ans - 1 : ans);
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