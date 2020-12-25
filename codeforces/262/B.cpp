#include<bits/stdc++.h>
using namespace std;

//#define int long long
//const int MOD = 1000000007;


void striker()
{
    int n, k;
    cin >> n >> k;
    int sum = 0, mini=INT_MAX;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        if (k > 0 && x <= 0)
        {
            sum += -x;
            k--;
        }
        else
            sum += x;
        mini = min( abs(x), mini );
    }
    if (k % 2)
        sum -= 2*mini;
    cout << sum;
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