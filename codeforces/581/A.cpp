#include<bits/stdc++.h>
using namespace std;
#define end "\n"


//#define int long long
//const int MOD = 1000000007;


int power(int n)
{
    int x = 1;
    for (int i = 1; i <= n; i++)
        x *= 10;
    return x;
}


void striker()
{
    int a, b;
    cin >> a >> b;
    cout << min(a, b) << " " << (max(a, b) - min(a, b)) / 2;
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





