#include<bits/stdc++.h>
using namespace std;

//#define int long long
//const int MOD = 1000000007;


void striker()
{
    int n;
    cin >> n;
    int arr[n];
    int postv = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        if (arr[i] > 0)
            postv = arr[i];
    }
    sort(arr, arr + n);
    cout << 1 << " " << arr[0] << "\n";
    if (postv != INT_MIN)
    {
        cout << 1 << " " << postv << "\n";
        cout << n - 2 << " ";
    }
    else
    {
        cout << 2 << " " << arr[1] << " " << arr[2] << "\n";
        cout << n - 3 << " ";
        arr[1] = postv, arr[2] = postv;
    }
    for (int i = 1; i < n; i++)
    {
        if (postv == arr[i])
            continue;
        cout << arr[i] << " ";
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