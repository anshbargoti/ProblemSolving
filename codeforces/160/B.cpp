#include<bits/stdc++.h>
using namespace std;

//#define int long long
// const int MOD = 1000000007;

void striker()
{
    int n;
    cin>>n;
    string s1,s2;
    char ch;
    for(int i=0;i<2*n;i++)
    {
        cin>>ch;
        if(i<n)
            s1+=ch;
        else
            s2+=ch;
    }
    sort(s1.begin(),s1.end());
    sort(s2.begin(),s2.end());
    int left=0,right=0;
    for(int i=0;i<n;i++)
    {
        if(s1[i]<s2[i])
            left++;
        else if(s1[i]>s2[i])
            right++;
    }
    cout<<(max(left,right)==n?"YES":"NO");
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