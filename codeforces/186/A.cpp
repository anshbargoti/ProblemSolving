#include<bits/stdc++.h>
using namespace std;

//#define int long long
// const int MOD = 1000000007;

void striker()
{
    string s1,s2;
    cin>>s1>>s2;
    if(s1.size()!=s2.size())
    {
        cout<<"NO";
        return;
    }
    int count_diff=0;
    int arr[26]={0};
    for(int i=0;i<s1.size();i++)
    {
        arr[s1[i]-'a']++;
        arr[s2[i]-'a']--;
        if(s1[i]!=s2[i])
        {
            count_diff++;
            if(count_diff>2)
            {
                cout<<"NO";
                return;
            }
        }
    }
    for(int i=0;i<26;i++)
    {
        if(arr[i]!=0)
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