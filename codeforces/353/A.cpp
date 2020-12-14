#include<bits/stdc++.h>
using namespace std;

//#define int long long
// const int MOD = 1000000007;

void striker()
{
    int n;
    cin>>n;
    int sum_x=0,sum_y=0;
    int arr[n];
    int brr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i]>>brr[i];
        sum_x+=arr[i];
        sum_y+=brr[i];
    }
    int count=0;
    if(sum_x%2==0 && sum_y%2==0)
        cout<<0;
    else if((sum_x+sum_y)%2==1)
        cout<<-1;
    else
    {
        for(int i=0;i<n;i++)
        {
            if(arr[i]!=brr[i] && (arr[i]+brr[i])%2==1)
            {
                cout<<1;
                return;
            }
        }
        cout<<-1;
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