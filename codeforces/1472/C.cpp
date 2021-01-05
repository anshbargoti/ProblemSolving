#include<bits/stdc++.h>
using namespace std;



//#define int long long
//const int MOD = 1000000007;


void striker()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    int res = 0;
    for (int i = n - 1; i >= 0; i--)
    {
        if (i + arr[i] < n)
            arr[i] += arr[i + arr[i]];
        res = max(arr[i], res);
    }
    cout << res;
}

int32_t main(){

    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    
    int t;
    cin >> t;
    for(int i=0;i<t;i++)
    {
        //cout<<"#Case: "<<i+1<<endl;
        striker();
        cout<<endl;
    }
     return 0;
}