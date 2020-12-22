#include<bits/stdc++.h>
using namespace std;

//#define int long long
//const int MOD = 1000000007;


void striker()
{
    int a, b, c;
    cin >> a >> b;
    c = a + b;
    string x = to_string(a);
    string y = to_string(b);
    string z = to_string(c);
    x.erase( remove(x.begin(), x.end(), '0'), x.end() );
    y.erase( remove(y.begin(), y.end(), '0'), y.end() );
    z.erase( remove(z.begin(), z.end(), '0'), z.end() );
    a = stoi(x), b = stoi(y), c = stoi(z);
    cout << (a + b == c ? "YES" : "NO");
}

int32_t main(){

    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    
    int t=1;
//    cin>>t;
    for(int i=0;i<t;i++)
    {
        //cout<<"#Case: "<<i+1<<endl;
        striker();
        cout<<endl;
    }
     return 0;
}