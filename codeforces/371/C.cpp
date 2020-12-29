#include<bits/stdc++.h>
using namespace std;
#define int long long
int nb, ns, nc, pb, ps, pc, ruble, b, s, c;


//const int MOD = 1000000007;


bool valid (int n)
{
    int rubleB = max(0ll, n * b - nb) * pb;
    int rubleS = max(0ll, n * s - ns) * ps;
    int rubleC = max(0ll, n * c - nc) * pc;
    int cost = rubleB + rubleC + rubleS;
    return cost <= ruble;
}


void striker()
{
    string str;
    cin >> str;
    cin >> nb >> ns >> nc >> pb >> ps >> pc >> ruble; 
    for (char x : str)
    {
        if (x == 'B')
            b++;
        else if (x == 'S')
            s++;
        else
            c++;
    }
    int low = 0, high = max({nb, ns, nc}) + ruble;
    int mid, res = 0;
    while (low <= high)
    {
        mid = low + (high - low) / 2;
        if (valid(mid))
        {
            res = mid;
            low = mid + 1;
        }
        else
            high = mid - 1;
    }
    cout << res;
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