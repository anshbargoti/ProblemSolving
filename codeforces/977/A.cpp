#include<bits/stdc++.h>
using namespace std;
#define end "\n"


//#define int long long
//const int MOD = 1000000007;



void striker()
{
    int n, k;
    cin >> n >> k;
    int temp;
    while (k)
    {
        temp = min(n % 10, k);
        if (temp == 0)
            n /= 10;
        else
            n -= temp;
        k -= (temp > 0 ? temp : 1);
    }
    cout << n;
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
        cout<<end;
    }
    return 0;
}