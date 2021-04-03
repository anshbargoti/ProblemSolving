#include<bits/stdc++.h>
using namespace std;



//#define int long long
// const int MOD = 1000000007;

     
// bool chck(string str)
// {
//     int n = str.size();
//     for (int i = 0; i < n; i++)
//     {
//         if (str[i] != str[n - 1 - i])
//             return false;
//     }
//     return true;
// }


void striker()
{
    int n;
    cin >> n;
    string a, b;
    cin >> a >> b;
    if (a == b)
    {
        cout << "YES";
        return;
    }
    int count_0 = 0, count_1 = 0, temp = 0;
    bool flag = true;
    for (int i = 0; i < n; i++)
    {
        if (a[i] != b[i] && temp == 0)
        {
            if (count_0 == count_1)
            {
                temp = 1;
                count_0 = 0;
                count_1 = 0;
            }
            else
            {
                flag = false;
                break;
            }           
        }
        else if (a[i] == b[i] && temp == 1)
        {
            if (count_0 == count_1)
            {
                temp = 0;
                count_0 = 0;
                count_1 = 0;
            }
            else
            {
                flag = false;
                break;
            }
        }
        count_0 += (a[i] == '0' ? 1 : 0);
        count_1 += (a[i] == '1' ? 1 : 0);
    }
    if (temp == 1 && count_0 != count_1)
        flag = false;
    cout << (flag == true ? "YES" : "NO");
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
        // cout << "#Case: " << i + 1 << endl;
        striker();
        cout << endl;
    }
    return 0;
}