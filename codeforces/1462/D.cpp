#include<bits/stdc++.h>
using namespace std;



//#define int long long
// const int maxn = 2 * 1e5;
// vector<int> prm;
// const int MOD = 1000000007;



// void sieve()
// {
//     bool prime[maxn + 1];
//     memset(prime, true, sizeof(prime));
 
//     for (int p = 2; p * p <= maxn; p++)
//     {
//         if (prime[p] == true) 
//         {
//             for (int i = p * p; i <= maxn; i += p)
//                 prime[i] = false;
//         }
//     }
//     for (int p = 2; p <= maxn; p++)
//         if (prime[p])
//             prm.push_back(p);
// }



void striker()
{
    int n;
    cin >> n;
    int arr[n];
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        sum += arr[i];
    }
    for (int i = n; i >= 1; i--)
    {
        if (sum % i != 0)
            continue;
        int need_sum = sum / i;
        int need_ele = i;
        int curr_sum = 0, curr_ele = 0;
        bool flag = true;
        for (int i = 0; i < n; i++)
        {
            curr_sum += arr[i];
            if (curr_sum == need_sum)
            {
                curr_sum = 0;
                curr_ele++;
            }
            else if (curr_sum > need_sum)
            {
                flag = false;
                break;
            }
        }
        if (flag && curr_ele == need_ele)
        {
            cout << n - i;
            return;
        }
    }
}

int32_t main(){

    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif


    int t;
    cin >> t;
    for(int i = 0; i < t; i++)
    {
        //cout<<"#Case: "<<i+1<<endl;
        striker();
        cout << endl;
    }
    return 0;
}