#include<bits/stdc++.h>
using namespace std;

// const int MOD = 1000000007;
//#define int long long


void striker()
{
    int n;
    cin>>n;
    int maxi=INT_MIN,mini=INT_MAX;
    int max_index,min_index;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        if(maxi<arr[i])
        {
            maxi=arr[i];
            max_index=i;
        }
        if(mini>=arr[i])
        {
            mini=arr[i];
            min_index=i;
        }
    }
    cout<<(max_index>min_index?max_index+((n-1)-min_index)-1:max_index+((n-1)-min_index));
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