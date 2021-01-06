#include<bits/stdc++.h>
using namespace std;
#define int long long


//const int MOD = 1000000007;


void striker()
{
    int n, x;
    cin >> n >> x;
    queue<int> q;
    int sum = 0, count_time, val, flag = 1;
    for (int i = 0; i < n; i++)
    {
        cin >> val;
        q.push(val);
        q.push(1);
    }
    while(q.empty() == false)
    {
        val = q.front();
        q.pop();
        count_time = q.front();
        q.pop();
        sum += count_time * val;
        if (val % x == 0 && flag)
        {
            val = val / x;
            count_time = count_time * x;
            q.push(val);
            q.push(count_time);
        }
        else
            flag = 0;
    }
    cout << sum;
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
    for(int i=0;i<t;i++)
    {
        //cout<<"#Case: "<<i+1<<endl;
        striker();
        cout<<endl;
    }
     return 0;
}