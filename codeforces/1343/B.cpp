#include<bits/stdc++.h>
using namespace std;


//#define int long long
// const int MOD = 1000000007;


void striker()
{
    int n;
    cin >> n;
    if (n % 4 != 0)
        cout << "NO";
    else
    {
        cout << "YES" << "\n";
        n /= 2;
        for (int i = 1; i <= n; i++)
            cout << 2 * i << " ";
        for (int i = 1; i <= n; i++)
        {
            if (i == n)
                cout << 2 * i - 1 + n;
            else
                cout << 2 * i - 1 << " ";
        }
    }
}

int32_t main(){

    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        //cout<<"#Case: "<<i+1<<endl;
        striker();
        cout<<endl;
    }
     return 0;
}