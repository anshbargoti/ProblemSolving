#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

// void striker(int m,int n)
// {
//     return;
// }

int32_t main(){

    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    
    int t=1;
    //cin>>t;
    while(t--)
    {
        int n,x;
        cin>>n;
        int arr[n];
        unordered_map<int,int> um;
        for(int i=0;i<n;i++)
        {
            cin>>x;
            arr[i]=x;
            cin>>x;
            um[x]++;
        }

        int sum=0;
        for(int i=0;i<n;i++)
        {
            sum+=um[arr[i]];
        }
        //striker(n);
        cout<<sum<<endl;
    }
     return 0;
}
