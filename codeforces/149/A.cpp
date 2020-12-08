#include<bits/stdc++.h>
using namespace std;

//#define int long long
// const int MOD = 1000000007;

void striker()
{
    int k;
    cin>>k;
    int arr[12];
    for(int i=0;i<12;i++)
        cin>>arr[i];
    sort(arr,arr+12,greater<int>());
    int i=0;
    int count=0,sum=0;
    while(i<12)
    {
        if(sum>=k)
            break;
        sum+=arr[i];
        count++;
        i++;
    }
    cout<<(sum<k?-1:count);
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