#include<bits/stdc++.h>
using namespace std;

//#define int long long
//const int MOD = 1000000007;


void striker()
{
    int n;
    cin >> n;
    bool visited[3001] = {false};
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        visited[x] = true;
    }
    int i;
    for (i = 1; i < 3001; i++)
    {
        if (!visited[i])
            break;
    }
    cout << i;
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