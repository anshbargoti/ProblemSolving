#include<bits/stdc++.h>
using namespace std;

//#define int long long
// const int MOD = 1000000007;


void striker()
{
    int n,m,d;
    cin>>n>>m>>d;
    int arr[n*m];
    int k=0;
    bool flag=true;
    int rem;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            int x;
            cin>>x;
            arr[k++]=x;
            if(i==0 && j==0)
                rem=x%d;
            if(x%d!=rem)
                flag=false;
        }
    }
    if(!flag)
    {
        cout<<-1;
        return;
    }
    sort(arr,arr+n*m);
    int median;
    n%2==0?median=(arr[n*m/2]+arr[(n*m-1)/2])/2:median=arr[n*m/2];
    int count=0;
    for(int i=0;i<n*m;i++)
        count+=abs(median-arr[i]);
    cout<<count/d;
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