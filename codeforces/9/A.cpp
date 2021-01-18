#include<bits/stdc++.h>
using namespace std;



//#define int long long
// const int MOD = 1000000007;



void striker()
{
    int a, b;
    cin >> a >> b;
    int maxi = 6 - max(a, b) + 1;
    if (maxi == 0 || maxi == 1 || maxi == 5)
        cout << maxi << "/6";
    else
    {
        if (maxi == 2)
            cout << "1/3";
        else if (maxi == 3)
            cout << "1/2";
        else if (maxi == 4)
            cout << "2/3";
        else
            cout << "1/1";
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
    for(int i = 0; i < t; i++)
    {
        //cout<<"#Case: "<<i+1<<endl;
        striker();
        //cout << endl;
    }
    return 0;
}