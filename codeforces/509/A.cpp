#include<bits/stdc++.h>
using namespace std;
#define int long long
int arr[10][10];


// const int MOD = 1000000007;


void pre_compute()
{
    for (int i = 0; i < 10; i++)
    {
        arr[i][0] = 1;
        arr[0][i] = 1;
    }
    for (int i = 1; i < 10; i++)
    {
        for (int j = 1; j < 10; j++)
        {
            arr[i][j] = arr[i - 1][j] + arr[i][j - 1];
        }
    }
}


void striker()
{
    pre_compute();
    int n;
    cin>>n;
    cout << arr[n - 1][n - 1];
}

int32_t main(){

    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    
    int t = 1;
//    cin >> t;
    for(int i=0;i<t;i++)
    {
        //cout<<"#Case: "<<i+1<<endl;
        striker();
        cout<<endl;
    }
     return 0;
}