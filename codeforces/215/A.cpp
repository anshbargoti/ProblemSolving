#include<bits/stdc++.h>
using namespace std;

//#define int long long
// const int MOD = 1000000007;

void striker()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    int m;
    cin>>m;
    int brr[m];
    for(int i=0;i<m;i++)
        cin>>brr[i];
    int maxi=INT_MIN;
    int count=0;
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(brr[i]%arr[j]==0 && maxi<brr[i]/arr[j])
            {
                maxi=brr[i]/arr[j];
                count=1;
            }
            else if(brr[i]%arr[j]==0 && maxi==brr[i]/arr[j])
                count++;
        }
    }
    cout<<count;
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