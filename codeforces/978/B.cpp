#include<bits/stdc++.h>
using namespace std;
#define int long long



// const int MOD = 1000000007;



void striker()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    int ans = 0, curr_count = 0;
    for (int i = 0; i < n; i++)
    {
        if(s[i] == 'x')
            curr_count++;
        else if (s[i] != 'i')
            curr_count = 0;
        if (s[i] == 'x' && curr_count >= 3)
            ans++;
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