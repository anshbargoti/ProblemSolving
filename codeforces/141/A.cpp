#include<bits/stdc++.h>
using namespace std;
#define int long long

// const int MOD = 1000000007;

void striker()
{
    string s1,s2,s3;
    cin>>s1>>s2>>s3;
    s1=s1+s2;
    sort(s1.begin(),s1.end());
    sort(s3.begin(),s3.end());
    if(s1.compare(s3)==0)
        cout<<"YES";
    else
        cout<<"NO";
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