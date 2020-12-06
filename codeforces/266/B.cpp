#include<bits/stdc++.h>
using namespace std;

//#define int long long
// const int MOD = 1000000007;

void striker()
{
    int n, t;
    cin >> n >> t;
    string s;
    cin>>s;

    while(t--){
        for (int i = 0; i < n - 1;)
        {
            if(s[i]=='B' && s[i + 1]=='G')
            {
                swap(s[i],s[i + 1]);
                i+=2;
            }
            else i++;
        }
    }
    cout<<s;
    
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