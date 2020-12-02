#include<bits/stdc++.h>
using namespace std;
//#define int long long

void striker()
{
    int arr[5][5]={};
    for(int i=1;i<=3;i++)
    {
        for(int j=1;j<=3;j++)
            cin>>arr[i][j];
    }
    for(int i=1;i<=3;i++)
    {
        for(int j=1;j<=3;j++)
        {
            cout<<(arr[i][j]+arr[i][j+1]+arr[i][j-1]+arr[i-1][j]+arr[i+1][j]+1)%2;
        }
        cout<<endl;
    }
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