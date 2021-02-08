#include<bits/stdc++.h>
using namespace std;
#define int long long



// const int MOD = 1000000007;


void striker()
{
    int pow, h, n;
    cin >> pow >> h >> n;
    pair<int, int> p[n];
    for (int i = 0; i < n; i++)
        cin >> p[i].first;
    for (int i = 0; i < n; i++)
        cin >> p[i].second;
    sort(p, p + n);
    for (int i = 0; i < n; i++)
    {
        int req = p[i].second / pow + (p[i].second % pow > 0);
        int curr = h / p[i].first + (h % p[i].first > 0);
        h -= min(req, curr) * p[i].first;
        p[i].second -= min(req, curr) * pow;
        if ((h <= 0 && i < n - 1) || p[i].second > 0)
        {
            cout << "NO";
            return;
        }
    }
    cout << "YES";
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