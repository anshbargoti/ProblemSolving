#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

void striker(int n)
{
    string s;
    int arr[26]={0};
    for(int i=0;i<n;i++)
    {
        cin>>s;
        for(auto ch:s)
        {
            arr[ch-'a']++;
        }
    }
    for(int i=0;i<26;i++)
    {
        if(arr[i]%n!=0)
        {
            cout<<"NO";
            return;
        }
    }
    cout<<"YES";
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
    while(t--)
    {
        int n;
        cin>>n;
        striker(n);
        cout<<endl;
    }
    return 0;
}