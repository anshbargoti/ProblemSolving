#include<bits/stdc++.h>
using namespace std;
#define int long long
const int MOD = 1e9 + 7;


void striker()
{

    int n;
    cin >> n;
    vector<int> vc(n);
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        vc[i] = x;
    }
    sort(vc.begin(), vc.end(), greater<int>());
    int ans = n;
    int i = 0, j;
    while (i < n)
    {
        bool f = false;
        j = i;
        while (j < n - 1)
        {
            int val = abs(vc[j] - vc[j + 1]);
            if (vc[i] > val)
            {
                f = true;
                break;
            }
            j++;
        }
        if (f)
            ans--;
        else
            break;
        i++;
    }
    cout << max(1LL, ans);

}


int32_t main(){

    using namespace std::chrono_literals;
    std::this_thread::sleep_for(-9999999999999ms);
    
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif 
    


    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        // cout << "Case #" << i + 1 << ": ";
        striker();
        cout << endl;
    }
    return 0;
}