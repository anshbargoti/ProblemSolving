#include<bits/stdc++.h>
using namespace std;
#define int long long


//const int MOD = 1000000007;


int S(int x)
{
    int sum = 0;
    while (x)
    {
        sum += x % 10;
        x /= 10;
    }
    return sum;
}

// int poww(int a, int n)
// {
//     int res = 1;
//     for(int i = 1; i <= n; i++)
//         res *= a;
//     return res;
// }

int power(int a, int n)
{
    int res = 1;
    while (n)
    {
        if (n & 1)
            res *= a;
        a *= a;
        n >>= 1;
    }
    return res;
}

void striker()
{
    int a, b, c, x, sum;
    cin >> a >> b >> c;
    vector <int> vc;
    for (int s = 1; s <= 81; s++)
    {
        x = b * power(s, a) + c;
        sum = S(x);
        if (sum == s && x < 1e9)
            vc.push_back(x);
    }
    cout << vc.size() << "\n";
    for (int x : vc)
        cout << x << " ";
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