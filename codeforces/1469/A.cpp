#include<bits/stdc++.h>
using namespace std;


//#define int long long
//const int MOD = 1000000007;


void striker()
{
    string s;
    cin >> s;
    int n = s.size();
    if (n % 2 == 1)
        cout << "NO";
    else if (s[0] == ')' || s[n - 1] == '(')
        cout << "NO";
    else
        cout << "YES";
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
    for(int i=0;i<t;i++)
    {
        //cout<<"#Case: "<<i+1<<endl;
        striker();
        cout<<endl;
    }
     return 0;
}