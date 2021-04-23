#include<bits/stdc++.h>
using namespace std;
#define int long long
// const int MOD = 1000000007;
const int maxn = 110;
int res[maxn][maxn];


void striker()
{
    int n, m;
    cin >> n >> m;
    int arr[n][m];
    priority_queue<pair<int, int>> p;
    priority_queue<pair<int, int>> q;
    for (int i = 0; i < m; i++)
        p.push({LLONG_MAX, i});
    for (int i = 0; i < n; i++)
    {
        priority_queue<int, vector<int>, greater<int>> pq;
        for (int j = 0; j < m; j++)
        {
            cin >> arr[i][j];
            pq.push(arr[i][j]);
        }

        while (p.empty() == false)
        {
            auto x = p.top();
            p.pop();
            auto y = pq.top();
            pq.pop();
            if (x.first > y)
                x.first = y;
            res[i][x.second] = y;
            q.push(x);
        }
        while (q.empty() == false)
        {
            auto x = q.top();
            q.pop();
            p.push(x);
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << res[i][j] << " ";
        }
        cout << endl;
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