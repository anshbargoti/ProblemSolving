#include<bits/stdc++.h>
using namespace std;

//#define int long long
// const int MOD = 1000000007;

void striker()
{
    string h,t;
    getline(cin,h);
    getline(cin,t);
    int arr[57]={0};
    for(int i=0;i<h.size();i++)
    {
        if(h[i]!=' ')
            arr[h[i]-'A']++;
    }
    for(int i=0;i<t.size();i++)
    {
        if(t[i]!=' ')
            arr[t[i]-'A']--;
        if(arr[t[i]-'A']<0)
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