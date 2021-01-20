#include<bits/stdc++.h>
using namespace std;



//#define int long long
// const int MOD = 1000000007;



void striker()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    int prev;
    if (s[0] == '0')
    {
        cout << 1;
        prev = 1;
    }
    else
    {
        cout << 1;
        prev = 2;
    }
    for (int i = 1; i < n; i++)
    {
        if (s[i] == '1')
        {
            if (prev == 2)
            {
                cout << 0;
                prev = 1;
            }
            else
            {
                cout << 1;
                prev = 2;
            }
        }
        else
        {
            if (prev == 2 || prev == 0)
            {
                cout << 1;
                prev = 1;
            }
            else if (prev == 1)
            {
                cout << 0;
                prev = 0;
            }
        }
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
    for(int i = 0; i < t; i++)
    {
        //cout<<"#Case: "<<i+1<<endl;
        striker();
        cout << endl;
    }
    return 0;
}