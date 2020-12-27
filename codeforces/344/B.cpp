#include<bits/stdc++.h>
using namespace std;


//#define int long long
//const int MOD = 1000000007;


void striker()
{
    int a, b, c;
    cin >> a >> b >> c;
    int sum = a + b + c;
    a = (sum - 2 * a) / 2, b = (sum - 2 * b) / 2, c = (sum - 2 * c) / 2;
    if (sum % 2 != 0 || a < 0 || b < 0 || c < 0)
        cout << "Impossible";
    else
        cout << c << " " << a << " " << b;
}

int32_t main(){

    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    
    int t = 1;
//    cin>>t;
    for(int i=0;i<t;i++)
    {
        //cout<<"#Case: "<<i+1<<endl;
        striker();
        cout<<endl;
    }
     return 0;
}