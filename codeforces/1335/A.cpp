#include<bits/stdc++.h>
using namespace std;
#define end "\n"


//#define int long long
//const int MOD = 1000000007;


void striker()
{
    int n;
    cin >> n;
    if (n < 3)
        cout << 0;
    else
        cout << (n + 1) / 2 - 1;
}

int32_t main(){

    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

#ifndef ONLINE_JUDGE
    clock_t tStart = clock();
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    
    int t;
    cin >> t;
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