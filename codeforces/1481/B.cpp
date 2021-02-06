#include<bits/stdc++.h>
using namespace std;
#define int long long



// const int MOD = 1000000007;


void striker()
{
    int n, k;
    cin >> n >> k;
    int h[n];
    for (int i = 0; i < n; i++)
        cin >> h[i];
    int pos = -1, flag = 1;
    while (k--)
    {
        if (flag == 0)
        {
            cout << -1;
            return;
        }
        for (int i = 0; i < n - 1; i++)
        {
            if (h[i] >= h[i + 1])
                flag = 0;
            else
            {
                pos = i + 1;
                h[i]++;
                flag = 1;
                break;
            }
        }
    }
    if (flag)
        cout << pos;
    else
        cout << -1;
}


int32_t main(){

    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

#ifndef ONLINE_JUDGE
    clock_t tStart = clock();
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        // cout<<"#Case: "<<i+1<<endl;
        striker();
        cout << endl;
    }

#ifndef ONLINE_JUDGE
    printf("\nRun Time -> %.10fs\n", (double)(clock()-tStart) / CLOCKS_PER_SEC);
#endif

    return 0;
}