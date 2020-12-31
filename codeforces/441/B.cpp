#include<bits/stdc++.h>
using namespace std;
int arr[3005];

//#define int long long
//const int MOD = 1000000007;


void striker()
{
    int n, v;
    cin >> n >> v;
    for (int i = 1; i <= n; i++)
    {
        int x, y;
        cin >> x >> y;
        arr[x] += y;
    }
    int ans = 0, temp, curr;
    for (int i = 1; i <= 3005; i++)
    {
        curr = v;
        if (arr[i - 1])
        {
            temp = min (curr, arr[i - 1]);
            ans += temp;
            arr[i - 1] -= temp;
            curr -= temp; 
        }
        if (curr)
        {
            temp = min (curr, arr[i]);
            ans += temp;
            arr[i] -= temp;
            curr -= temp;
        }
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
//    cin>>t;
    for(int i=0;i<t;i++)
    {
        //cout<<"#Case: "<<i+1<<endl;
        striker();
        cout<<endl;
    }
     return 0;
}