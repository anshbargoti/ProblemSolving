#include<bits/stdc++.h>
using namespace std;
#define end "\n"



//#define int long long
//const int MOD = 1000000007;


void striker()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    int count_tot = 0;
    for (int i = 0; i < n; i++)
        count_tot += (s[i] == 'A' ? 1 : -1);
    if (count_tot > 0)
        cout << "Anton";
    else if (count_tot < 0)
        cout << "Danik";
    else
        cout << "Friendship";
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