#include<bits/stdc++.h>
using namespace std;


//#define int long long
//const int MOD = 1000000007;


void striker()
{
    int n, m;
    cin >> n >> m;
    int arr[n + 1] = {0};
    int a, b, c;
    for (int i = 0; i < m; i++)
    {
        cin >> a >> b >> c;
        if (arr[a])
        {
            arr[b] = arr[a] % 3 + 1;
            arr[c] = arr[b] % 3 + 1;
        }
        else if (arr[b])
        {
            arr[c] = arr[b] % 3 + 1;
            arr[a] = arr[c] % 3 + 1;
        }
        else if (arr[c])
        {
            arr[a] = arr[c] % 3 + 1;
            arr[b] = arr[a] % 3 + 1;
        }
        else
        {
            arr[a] = 1;
            arr[b] = 2;
            arr[c] = 3;
        }
    }
    for (int i = 1; i <= n; i++)
            cout << arr[i] << " ";
}

int32_t main(){

    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    
    int t = 1;
//    cin>>t;
    for(int i=0;i<t;i++)
    {
        //cout<<"#Case: "<<i+1<<endl;
        striker();
        cout<<endl;
    }
     return 0;
}