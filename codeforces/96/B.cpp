#include<bits/stdc++.h>
using namespace std;
#define int long long
vector<int> vc;


//const int MOD = 1000000007;


void pre_compute(int curr, int f, int s)
{
    if (curr > 1e11)
        return;
    if (f == s && curr != 0)
        vc.push_back(curr);
    pre_compute(curr*10 + 4, f + 1, s);
    pre_compute(curr*10 + 7, f, s + 1);
}


void striker()
{
    pre_compute(0,0,0);
    int n;
    cin >> n;
    int i = 0;
    sort(vc.begin(),vc.end());
    cout << *lower_bound(vc.begin(), vc.end(), n);
}

int32_t main(){

    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    
    int t = 1;
//    cin>>t;
    for(int i=0;i<t;i++)
    {
        //cout<<"#Case: "<<i+1<<endl;
        striker();
        cout<<endl;
    }
     return 0;
}