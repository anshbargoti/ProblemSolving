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
    if (n <= 2)
        cout << n;
    else
    {
        int ans = 2, res = INT_MIN;
        for (int i = 2; i < n; i++)
        {
            if (arr[i] == arr[i-1] + arr[i-2])
                ans++;
            else
                ans = 2;
            res = max(res, ans);    
        }
        cout << res;
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
        cout<<endl;
    }
     return 0;
}