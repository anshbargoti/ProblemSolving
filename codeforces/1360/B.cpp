#include<bits/stdc++.h>
using namespace std;


//#define int long long
// const int MOD = 1000000007;


void striker()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    sort(arr, arr + n);
    if (n == 2)
        cout << arr[1] - arr[0];
    else
    {
        int mini_diff = 1000;
        for (int i = 1; i < n; i++)
        {
            mini_diff = min(mini_diff, arr[i] - arr[i - 1]);
            if (mini_diff == 0)
                break;
        }
        cout << mini_diff;
    }
}

int32_t main(){

    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        //cout<<"#Case: "<<i+1<<endl;
        striker();
        cout<<endl;
    }
     return 0;
}