#include<bits/stdc++.h>
using namespace std;
#define int long long



// const int MOD = 1000000007;


void striker()
{
    int x, y;
    cin >> x >> y;
    int ans = x + 1;
    if (x < y)
        cout << 1;
    else if (x == y)
        cout << 2;
    else
    {
        for (int i = 0; i <= sqrt(x); i++)
        {
            if (i == 0 && y == 1)
                continue;
            else
            {
                int temp = x;
                int res = i;
                while (temp)
                {
                    res++;
                    temp /= (i + y);
                }
                ans = min(res, ans);
            }
        }
        cout << ans;
    }
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