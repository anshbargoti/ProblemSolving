#include<bits/stdc++.h>
using namespace std;
#define int long long
// const int MOD = 1000000007;


void striker()
{
    int n;
    cin >> n;
    char arr[n][n];
    int pos1_i = -1, pos1_j = -1, pos2_i = -1, pos2_j = -1;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> arr[i][j];
            if (pos1_i == -1 && arr[i][j] == '*')
            {
                pos1_i = i;
                pos1_j = j; 
            }
            else if (arr[i][j] == '*')
            {
                pos2_i = i;
                pos2_j = j;
            }
        }
    }
    if (pos1_i == pos2_i)
    {
        if (pos1_i != 0)
        {
            arr[0][pos1_j] = '*';
            arr[0][pos2_j] = '*';
        }
        else
        {
            arr[n - 1][pos1_j] = '*';
            arr[n - 1][pos2_j] = '*';
        }
    }
    else if (pos1_j == pos2_j)
    {
        int tmp = (pos1_j + 1) % n;
        arr[pos1_i][tmp] = '*';
        arr[pos2_i][tmp] = '*';
    }
    else
    {
        arr[pos1_i][pos2_j] = '*';
        arr[pos2_i][pos1_j] = '*';
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << arr[i][j];
        }
        cout << endl;
    }
    // cout << endl;
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
        // cout << endl;
    }
    return 0;
}