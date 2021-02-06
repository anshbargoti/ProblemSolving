#include<bits/stdc++.h>
using namespace std;
#define int long long



// const int MOD = 1000000007;


void striker()
{
    int px, py;
    cin >> px >> py;
    string s;
    cin >> s;
    int count_U = count(s.begin(), s.end(), 'U');
    int count_D = count(s.begin(), s.end(), 'D');
    int count_L = count(s.begin(), s.end(), 'L');
    int count_R = count(s.begin(), s.end(), 'R');
    if (px >= 0 && py >= 0 && count_R >= px && count_U >= py)
        cout << "YES";
    else if (px >= 0 && py <= 0 && count_R >= px && count_D >= abs(py))
        cout << "YES";
    else if (px <= 0 && py <= 0 && count_L >= abs(px) && count_D >= abs(py))
        cout << "YES";
    else if (px <= 0 && py >= 0 && count_L >= abs(px) && count_U >= py)
        cout << "YES";
    else
        cout << "NO";
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