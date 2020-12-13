#include<bits/stdc++.h>
using namespace std;

//#define int long long
// const int MOD = 1000000007;

void striker()
{
    int n;
    cin>>n;
    string s;
    cin>>s;
    int left_arr[n];
    int right_arr[n];
    for(int i=0;i<2*n;i++)
    {
        if(i<n)
            left_arr[i]=s[i];
        else
            right_arr[i-n]=s[i];
    }
    bool flag=false;
    sort(left_arr,left_arr+n);
    sort(right_arr,right_arr+n);
    if(left_arr[0]>right_arr[0])
        flag=true;
    else if(left_arr[0]<right_arr[0])
        flag=false;
    else
    {
        cout<<"NO";
        return;
    }
    for(int i=1;i<n;i++)
    {
        if(flag && left_arr[i]<=right_arr[i])
        {
            cout<<"NO";
            return;
        }
        else if(!flag && left_arr[i]>=right_arr[i])
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