#include<bits/stdc++.h>
using namespace std;

//#define int long long
//const int MOD = 1000000007;


void striker()
{
    string str;
    cin >> str;
    int n = str.size();
    if (n == 1)
    {
        cout << 0;
        return;
    }
    int count_tot = 0;
    for (char x : str)
        count_tot += (x - '0');
    int res = 1;
    while (count_tot > 9)
    {
        int temp = 0;
        while (count_tot > 0)
        {
            temp += count_tot % 10;
            count_tot /= 10;
        }
        ++res;
        count_tot = temp;
    }
    cout << res;
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