#include<bits/stdc++.h>
using namespace std;
#define int long long

void striker()
{
    int n;
    cin>>n;
    int arr[n];
    set<int> s;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        s.insert(arr[i]);
    }
    if(s.size()==1)
    {
        cout<<-1;
        return;
    }
    auto ele=*s.rbegin();
    for(int i=0;i<n-1;i++)
    {
        if(arr[i]!=ele && arr[i+1]==ele) 
        {
            cout<<i+2;
            return;
        }
        else if(arr[i]==ele && arr[i+1]!=ele)
        {
            cout<<i+1;
            return;
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