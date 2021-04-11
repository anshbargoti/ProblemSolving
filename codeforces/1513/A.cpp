#include<bits/stdc++.h>
using namespace std;
#define int long long
// const int MOD = 1000000007;


void striker()
{
    int n,k;
    cin >> n >> k;
    vector<int> vc(n + 1);
    for (int i = 1;i <= n; i++)
        vc[i]=i;
    if(k >= (n+1) / 2)
    {
        cout << -1;
        return;
    }
    cout << 1 <<" ";
    for(int i = 2; i <= n; i++)
    {
        if(k > 0)
        {
            swap(vc[i], vc[i+1]);
            cout << vc[i] << " " << vc[i + 1] << " ";
            i++;
            k--;
        }
        else
            cout << vc[i] <<" ";
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
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        // cout << "Case #" << i + 1 << ": ";
        striker();
        cout << endl;
    }
    return 0;
}