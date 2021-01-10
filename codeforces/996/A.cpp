#include<bits/stdc++.h>
using namespace std;
#define end "\n"


//#define int long long
//const int MOD = 1000000007;


void striker()
{
    int n;
    cin >> n;
    int ans = 0;
    if (n / 100 > 0)
    {
        ans += n / 100;
        n = n % 100;
    }
    if (n / 20 > 0)
    {
        ans += n / 20;
        n = n % 20;
    }
    if (n / 10 > 0)
    {
        ans += n / 10;
        n = n % 10;
    }
    if (n / 5 > 0)
    {
        ans += n / 5;
        n = n % 5;
    }if (n / 1 > 0)
    {
        ans += n / 1;
        n = n % 1;
    }
    cout << ans;
}

int32_t main(){

    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

#ifndef ONLINE_JUDGE
    clock_t tStart = clock();
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

#ifndef ONLINE_JUDGE
    printf("\nRun Time -> %.10fs\n", (double)(clock()-tStart) / CLOCKS_PER_SEC);
#endif

    return 0;
}