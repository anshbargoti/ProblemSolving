#include<bits/stdc++.h>
using namespace std;
#define end "\n"


//#define int long long
//const int MOD = 1000000007;



void striker()
{
    int n, k;
    cin >> n >> k;
    int arr[n];
    int ans = 0;
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    k = arr[k - 1];
    for (int i = 0; i < n; i++)
    {
        if (arr[i] >= k && arr[i] > 0)
            ans++;
    }
    cout << ans;
}

int32_t main(){

    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    
    int t = 1;
//    cin >> t;
    for(int i = 0; i < t; i++)
    {
        //cout<<"#Case: "<<i+1<<endl;
        striker();
        cout<<end;
    }
    return 0;
}