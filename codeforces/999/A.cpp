#include<bits/stdc++.h>
using namespace std;


//#define int long long
//const int MOD = 1000000007;


void striker()
{
    int n, k;
    cin >> n >> k;
    int count = 0;
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    int i = 0;
    for (; i < n; i++)
    {
        if (arr[i] <= k)
            count++;
        else
            break;
    }
    for (int j = n - 1; j > i; j--)
    {
        if ( j > -1 && arr[j] <= k)
            count++;
        else
            break;
    }
    cout << count;
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
    for(int i=0;i<t;i++)
    {
        //cout<<"#Case: "<<i+1<<endl;
        striker();
        cout<<endl;
    }
     return 0;
}