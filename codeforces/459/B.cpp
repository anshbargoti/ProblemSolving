#include<bits/stdc++.h>
using namespace std;
#define int long long

// const int MOD = 1000000007;

void striker()
{
    int n;
    cin>>n;
    int mini=INT_MAX,maxi=INT_MIN,count_min=0,count_max=0;
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        if(mini>x)
        {
            mini=x;
            count_min=1;
        }
        else if(mini==x)
            count_min++;
        if(maxi<x)
        {
            maxi=x;
            count_max=1;
        }
        else if(maxi==x)
            count_max++;
    }
    cout<<maxi-mini<<" ";
    if(maxi-mini==0)
        cout<<count_max*(count_max-1)/2;
    else
        cout<<count_max*count_min;
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