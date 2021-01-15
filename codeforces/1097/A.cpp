#include<bits/stdc++.h>
using namespace std;



//#define int long long
// const int MOD = 1000000007;



void striker()
{
    string s;
    cin >> s;
    bool flag = 0;
    for (int i = 0; i < 5; i++)
    {
        string x;
        cin >> x;
        if (x[0] == s[0] || x[1] == s[1])
            flag = 1;
    }
    if (flag)
        cout << "YES";
    else
        cout << "NO";
}

int32_t main(){

    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    
    int t =1;
//    cin >> t;
    for(int i = 0; i < t; i++)
    {
        //cout<<"#Case: "<<i+1<<endl;
        striker();
        cout << endl;
    }
    return 0;
}