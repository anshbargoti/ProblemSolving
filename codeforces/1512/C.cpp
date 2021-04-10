#include<bits/stdc++.h>
using namespace std;
#define int long long
// const int MOD = 1000000007;


void striker()
{
    int a, b;
    cin >> a >> b;
    string s;
    cin >> s;
    int n = s.size();
    int count_0 = 0, count_1 = 0;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == '0')
            count_0++;
        else if (s[i] == '1')
            count_1++;
    }
    int rem_0 = a - count_0;
    int rem_1 = b - count_1;
    int chck0 = 0, chck1 = 0, tmp;
    vector<int> vc;
    int i = 0, j = n - 1;
    for (;;i++,j--)
    {
        if (i >= j)
            break;
        if (s[i] == s[j] && s[i] == '?')
        {
            vc.push_back(i);
            chck1 = 1;
        }
        else if (s[i] == '?' && s[j] != '?')
        {
            tmp = s[j] - '0';
            if (rem_0 > 0 && tmp == 0)
            {
                rem_0--;
                s[i] = '0';
            }
            else if (rem_1 > 0 && tmp == 1)
            {
                rem_1--;
                s[i] = '1';
            }
            else
            {
                chck0 = 1;
                break;
            }
        }
        else if (s[i] != '?' && s[j] == '?')
        {
            tmp = s[i] - '0';
            if (rem_0 > 0 && tmp == 0)
            {
                rem_0--;
                s[j] = '0';
            }
            else if (rem_1 > 0 && tmp == 1)
            {
                rem_1--;
                s[j] = '1';
            }
            else
            {
                chck0 = 1;
                break;
            }
        }
        else if (s[i] != s[j])
        {
            chck0 = 1;
            break;
        }
    }

    if (chck1)
    {
        int m = vc.size();
        for (int i = 0; i < m; i++)
        {
            if (rem_0 > 1)
            {
                rem_0 -= 2;
                int x = vc[i];
                s[x] = '0';
                s[n - 1 - x] = '0';
            }
            else if (rem_1 > 1)
            {
                rem_1 -= 2;
                int x = vc[i];
                s[x] = '1';
                s[n - 1 - x] = '1';
            }
            else
            {
                chck0 = 1;
                break;
            }
        }
    }
    // points to same val
    if (i == j)
    {
        if (s[i] == '?')
        {
            if (rem_0 >= 1)
            {
                rem_0--;
                s[i] = '0';
            }
            else if (rem_1 >= 1)
            {
                rem_1--;
                s[i] = '1';
            }
        }
    }
    if (rem_0 == 0 && rem_1 == 0)
        cout << (chck0 == 0 ? s : "-1");
    else
        cout << "-1";
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