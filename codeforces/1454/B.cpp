#include<bits/stdc++.h>
using namespace std;
#define int long long

void striker()
{
    int n;
    cin>>n;
    int arr[n];
    map<int,int> mp;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        mp[arr[i]]++;
    }   
    int res=0;
    for(auto it:mp)
    {
        if(it.second==1)
        {
            res=it.first;
            break;
        }
    }
    if(res==0)
    {
        cout<<-1;
        return;
    }
    else
    {
        for(int i=0;i<n;i++)
        {
            if(arr[i]==res)
            {
                cout<<i+1;
                return;
            }
        }
    }
    cout<<-1;
}

int32_t main(){

    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        //cout<<"#Case: "<<i+1<<endl;
        striker();
        cout<<endl;
    }
     return 0;
}