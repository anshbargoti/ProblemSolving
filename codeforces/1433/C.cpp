#include<bits/stdc++.h>
using namespace std;
#define int long long

void striker()
{
    int n;
    cin>>n;
    int arr[n];
    bool flag=true;
    for(int i=0;i<n;i++)
        cin>>arr[i];
    for(int i=0;i<n-1;i++)
    {
        if(arr[i]!=arr[i+1])
            flag=false;
    }
    if(flag)
    {
        cout<<-1;
        return;
    }
    int maxi=*max_element(arr,arr+n);
    for(int i=0;i<n;i++)
    {
        if(arr[i]==maxi)
        {
            if((arr[i-1]!=arr[i] && i>0) || (arr[i+1]!=arr[i] && i<n))
            {
                cout<<i+1;
                return;
            }
        }
    }

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