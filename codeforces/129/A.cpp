#include<bits/stdc++.h>
using namespace std;

//#define int long long
//const int MOD = 1000000007;


void striker()
{
    int n;
    cin >> n;
    int count_even = 0, sum = 0;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        count_even += x % 2 == 0;
        sum += x;
    }
    cout << (sum % 2 == 0 ? count_even : n - count_even);
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