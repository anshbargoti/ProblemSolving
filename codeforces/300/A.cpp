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
    sort(arr, arr + n);
    cout << 1 << " " << arr[0] << "\n";
    if (arr[n-1] > 0)
    {
        cout << 1 << " " << arr[n-1] << "\n";
        cout << n - 2 << " ";
        for (int i = 1; i < n-1; i++)
            cout << arr[i] << " ";
    }
    else
    {
        cout << 2 << " " << arr[1] << " " << arr[2] << "\n";
        cout << n - 3 << " ";
        for (int i = 3; i < n; i++)
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