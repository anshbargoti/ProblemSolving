#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

// void striker(int arr[M][N])
// {
//     return;
// }

int32_t main(){

    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    
    int t=1;
//    cin>>t;
    while(t--)
    {
        int a,b,ele;
        int arr[5][5];
        for(int i=0;i<5;i++)
        {
            for(int j=0;j<5;j++)
            {
                cin>>ele;
                arr[i][j]=ele;
                if(arr[i][j]==1)
                {
                    a=2-i;
                    b=2-j;
                }
            }
        }
        cout<<abs(a)+abs(b);
        // striker(arr);
        cout<<endl;
    }
     return 0;
}