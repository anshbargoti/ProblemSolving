#include<bits/stdc++.h>
using namespace std;

//#define int long long
// const int MOD = 1000000007;

void striker()
{
    int arr[4][4];
    for(int i=0;i<4;i++)
    {
        for(int j=0;j<4;j++)
        {
            char x;
            cin>>x;
            if(x=='#')
                arr[i][j]=-1;
            else
                arr[i][j]=1;
        }
    }
    bool flag=false;
    int sum;
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            sum=arr[i][j]+arr[i][j+1]+arr[i+1][j]+arr[i+1][j+1];
            if(sum==4 || sum==-4 || sum==2 || sum==-2)
            {
                flag=true;
                break;
            }
        }
    }
    cout<<(flag?"YES":"NO");
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