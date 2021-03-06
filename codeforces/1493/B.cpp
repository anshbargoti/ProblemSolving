#include<bits/stdc++.h>
using namespace std;
// #define int long long
int chck[10] = {0, 1, 5, -1, -1, 2, -1, -1, 8, -1};

// const int MOD = 1000000007;


void striker()
{
    int h, m;
    cin >> h >> m;
    string s;
    cin >> s;
    string str1 = s.substr(0, 2);
    string str2 = s.substr(3, 2);
    int h1, m1, toth, totm;
    h1 = stoi(str1);
    m1 = stoi(str2);
    // cout << h1 << ":" << m1;
    if (~chck[h1 / 10] && ~chck[h1 % 10] && ~chck[m1 / 10] && ~chck[m1 % 10])
    {
        toth = chck[m1 % 10] * 10 + chck[m1 / 10];
        totm = chck[h1 % 10] * 10 + chck[h1 / 10];
        if (toth >= 0 && totm >= 0 && toth < h && totm < m)
        {
            printf("%02d:%02d\n", h1, m1);
            return;
        }
    }
    int x = 0;
    while (true)
    {
        m1++, x++;
        if (m1 == m)
        {
            m1 = 0;
            h1++;
        }
        if (h1 == h)
            h1 = 0;
        if (~chck[h1 / 10] && ~chck[h1 % 10] && ~chck[m1 / 10] && ~chck[m1 % 10])
        {
            toth = chck[m1 % 10] * 10 + chck[m1 / 10];
            totm = chck[h1 % 10] * 10 + chck[h1 / 10];
            if (toth >= 0 && totm >= 0 && toth < h && totm < m)
                break;
        }
    }
    printf("%02d:%02d\n", h1, m1);
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
        // cout << "#Case: " << i + 1 << endl;
        striker();
        // cout << endl;
    }

#ifndef ONLINE_JUDGE
    printf("\nRun Time -> %.10fs\n", (double)(clock()-tStart) / CLOCKS_PER_SEC);
#endif

    return 0;
}