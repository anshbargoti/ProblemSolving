#include<bits/stdc++.h>
using namespace std;


//#define int long long
//const int MOD = 1000000007;


void striker()
{
    string s;
    cin >> s;
    int n = s.size();
    int arr[n] = {0};
    for (int i = 1; i < n; i++)
    {
        if (s[i] == s[i - 1])
            arr[i] = arr[i - 1] + 1;
        else
            arr[i] = arr[i - 1];
    }

    int m;
    cin >> m;
    for (int i = 0; i < m; i++)
    {
        int l, r;
        cin >> l >> r;
        cout << arr[r - 1] - arr[l - 1] << endl;
    }
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
        //cout<<endl;
    }
     return 0;
}