#include<bits/stdc++.h>
using namespace std;
#define int long long



// const int MOD = 1000000007;


void striker()
{
    int n;
    cin >> n;
    int ch, bic, bck;
    ch = bic = bck = 0;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        if (i % 3 == 0)
            ch += x;
        else if (i % 3 == 1)
            bic += x;
        else if (i % 3 == 2)
            bck += x;
    }
    if (ch > bic && ch > bck)
        cout << "chest";
    else if (bic > ch && bic > bck)
        cout << "biceps";
    else if (bck > ch && bck > bic)
        cout << "back";
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
    // cin >> t;
    for (int i = 0; i < t; i++)
    {
        // cout<<"#Case: "<<i+1<<endl;
        striker();
        cout << endl;
    }

#ifndef ONLINE_JUDGE
    printf("\nRun Time -> %.10fs\n", (double)(clock()-tStart) / CLOCKS_PER_SEC);
#endif

    return 0;
}