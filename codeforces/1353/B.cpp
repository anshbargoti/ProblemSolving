#include<bits/stdc++.h>
using namespace std;


//#define int long long
// const int MOD = 1000000007;


void striker()
{
    int n, k;
    cin >> n >> k;
    int arr[n], brr[n], sum = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        sum += arr[i];
    }
    for (int i = 0; i < n; i++)
        cin >> brr[i];
    sort(arr, arr + n);
    sort(brr, brr + n);
    reverse(brr, brr + n);
    for (int i = 0; i < k; i++)
    {
        if (brr[i] > arr[i])
            sum = sum - arr[i] + brr[i];
    }
    cout << sum;
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