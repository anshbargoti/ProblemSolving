#include<bits/stdc++.h>
using namespace std;
int a2, a3, a5, b2, b3, b5;


//#define int long long
//const int MOD = 1000000007;


void striker()
{
    int a, b;
    cin >> a >> b;
    while (true)
    {
        if (a % 2 == 0)
        {
            a2++;
            a /= 2;
        }
        else if (a % 3 == 0)
        {
            a3++;
            a /= 3;
        }
        else if (a % 5 == 0)
        {
            a5++;
            a /= 5;
        }
        else
            break;
    }
    while (true)
    {
        if (b % 2 == 0)
        {
            b2++;
            b /= 2;
        }
        else if (b % 3 == 0)
        {
            b3++;
            b /= 3;
        }
        else if (b % 5 == 0)
        {
            b5++;
            b /= 5;
        }
        else
            break;
    }
    if (a == b)
        cout << abs(a2 - b2) + abs(a3 - b3) + abs(a5 - b5);
    else
        cout << -1;
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