#include<bits/stdc++.h>
using namespace std;
#define int long long

// const int MOD = 1000000007;

void striker()
{
    int n;
    cin>>n;
    int arr[n];
    int count,mini_index,mini=INT_MAX;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        if(mini>arr[i])
        {
            mini=arr[i];
            mini_index=i;
            count=1;
        }
        else if(mini==arr[i])
            count++;
    }
    if(count>1)
        cout<<"Still Rozdil";
    else
        cout<<mini_index+1;
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