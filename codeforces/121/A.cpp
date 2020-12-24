#include<bits/stdc++.h>
using namespace std;
#define int long long
vector<int> vc;

//const int MOD = 1000000007;


void pre_compute()
{
    vc.push_back(0);
    vc.push_back(4);
    vc.push_back(7);
    int i = 1, k;
    while (true)
    {
        k = 10 * vc[i];
        vc.push_back(k + 4);
        vc.push_back(k + 7);
        i++;
        if (k > 1e9)
            break;
    }
}

void striker()
{
    pre_compute();
    int l, r;
    cin >> l >> r;
    int ans_right = 0, ans_left = 0;
    for (int i = 1; i < vc.size(); i++)
    {
        if (vc[i] < r)
            ans_right += vc[i] * (vc[i] - vc[i-1]);
        else
        {
            ans_right += vc[i] * (r - vc[i-1]);
            break;
        }
    }
    for (int i = 1; i < vc.size(); i++)
    {
        if (vc[i] < l-1)
            ans_left += vc[i] * (vc[i] - vc[i-1]);
        else
        {
            ans_left += vc[i] * (l-1 - vc[i-1]);
            break;
        }
    }
    cout << ans_right - ans_left;
}

int32_t main(){

    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    
    int t=1;
//    cin>>t;
    for(int i=0;i<t;i++)
    {
        //cout<<"#Case: "<<i+1<<endl;
        striker();
        cout<<endl;
    }
     return 0;
}