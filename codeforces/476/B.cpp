#include<bits/stdc++.h>
using namespace std;
int x, n;


//#define int long long
//const int MOD = 1000000007;


void recr(int k, int p, int m)
{
    if (k == 0)
    {
        n++;
        if (p == m)
            x++;
        return;
    }
    recr(k-1, p, m+1);
    recr(k-1, p, m-1);
}


void striker()
{
    string s1, s2;
    cin >> s1 >> s2;
    int a = 0, b = 0, unrecog = 0;
    for (int i = 0; i < s1.size(); i++)
        a += s1[i] == '+' ? 1 : -1;
    for (int i = 0; i < s2.size(); i++)
    {
        if (s2[i] == '?')
        {
            unrecog++;
            continue;
        }
        b += s2[i] == '+' ? 1 : -1;
    }
    recr(unrecog, a, b);
    cout << setprecision(15) << fixed << (1.0 * x) / n;
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