#include<bits/stdc++.h>
using namespace std;

//#define int long long
// const int MOD = 1000000007;

void striker()
{
    int k;
    cin>>k;
    string s;
    cin>>s;
    int arr[26]={0};
    for(int i=0;i<s.size();i++)
        arr[s[i]-'a']++;
    for(int i=0;i<26;i++)
    {
        if(arr[i]%k!=0 && arr[i]>0)
        {
            cout<<-1;
            return;
        }
        arr[i]=arr[i]/k;
    }
    string res;
    for(int i=0;i<26;i++)
    {
        if(arr[i]>0)
        {
            while(arr[i]--)
                res+=i+'a';
        }
    }
    for(int i=0;i<k;i++)
        cout<<res;
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