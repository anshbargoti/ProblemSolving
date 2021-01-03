#include<bits/stdc++.h>
using namespace std;


//#define int long long
//const int MOD = 1000000007;


void striker()
{
    int n, k;
    cin >> n >> k;
    string s;
    cin >> s;
    if (n == k)
        return;
    int count_arr[26] = {0};
    for (int i = 0; i < n; i++)
        count_arr[s[i] - 'a']++;
    string res = s;
    for (int i = 0; i < 26; i++)
    {
        if (count_arr[i] > 0)
        {
            for (int j = 0; j < n; j++)
            {
                if (s[j] - 'a' == i && k > 0)
                {
                    --k;
                    res[j] = '?';
                }
            }
        }
        if (k < 1)
            break;
    }
    for (int i = 0; i < n; i++)
    {
        if (res[i] != '?')
            cout << res[i];
    }
}

int32_t main(){

    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    
    int t = 1;
//    cin >> t;
    for(int i=0;i<t;i++)
    {
        //cout<<"#Case: "<<i+1<<endl;
        striker();
        cout<<endl;
    }
     return 0;
}