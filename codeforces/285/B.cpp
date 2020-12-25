#include<bits/stdc++.h>
using namespace std;

//#define int long long
//const int MOD = 1000000007;


void striker()
{
    int n, s, t;
    cin >> n >> s >> t;
    --s, --t;
    int arr[n], brr[n] = {0};
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    int count = 0;
    while (!brr[s])
    {
        if (s == t)
            break;
        brr[s] = 1;
        s = arr[s] - 1;
        count++;
    }
    cout << (s != t ? -1 : count);
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