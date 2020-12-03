#include<bits/stdc++.h>
using namespace std;
//#define int long long

// bool check_prime(int n)
// {
//     if(n<=3) 
//         return true; 
//     if(n%2==0 || n%3==0)
//         return false;
  
//     for(int i=5;i*i<=n;i++)
//     { 
//         if(n%i==0) 
//             return false;
//     }
//     return true; 
// }

void striker()
{
    string s1,s2;
    cin>>s1>>s2;
    for(int i=0;i<s1.size();i++)
    {
        if(s1[i]!=s2[i])
            cout<<1;
        else
            cout<<0;
    }
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