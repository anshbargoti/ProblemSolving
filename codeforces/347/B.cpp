#include<bits/stdc++.h>
using namespace std;


//#define int long long
//const int MOD = 1000000007;


void striker()
{
    int n;
    cin >> n;
    int count = 0, arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        count += arr[i] == i ? 1 : 0;
    }
    if (count == n)
        cout << n;
    else
    {
        for (int i = 0; i < n; i++)
        {
            if (arr[i] == i)
                continue;
            else if (arr[arr[i]] == i)
            {
                cout << count + 2;
                return;
            }
        }
        cout << count + 1;
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
        cout<<endl;
    }
     return 0;
}