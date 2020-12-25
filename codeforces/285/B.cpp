#include<bits/stdc++.h>
using namespace std;

//#define int long long
//const int MOD = 1000000007;


void striker()
{
    int n, s, t;
    cin >> n >> s >> t;
    int arr[n+1];
    for (int i = 1; i <= n; i++)
        cin >> arr[i];
    if (s == t)
    {
        cout << 0;
        return;
    }
    int count = 0, vist = 0;
    while (vist != n)
    {
        if (s == t)
            break;
        else
        {
            s = arr[s];
            count++;
        }
        vist++;
    }
    cout << (vist == n ? -1 : count);
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