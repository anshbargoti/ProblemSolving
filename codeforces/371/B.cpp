#include<bits/stdc++.h>
using namespace std;
int a, b, res;


//#define int long long
//const int MOD = 1000000007;

void div(int n)
{
    int count_a = 0, count_b = 0;
    while (a % n == 0)
    {
        a /= n;
        count_a++;
    }
    while (b % n == 0)
    {
        b /= n;
        count_b++;
    }
    res += abs(count_a - count_b);
}


void striker()
{
    cin >> a >> b;
    div(2);
    div(3);
    div(5);
    cout << (a == b ? res : -1);
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