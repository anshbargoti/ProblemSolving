#include<bits/stdc++.h>
using namespace std;
#define int long long

void striker()
{
    int x;
    cin>>x;
    int digits=log10(x)+1;
    long count=(x%10-1)*10+digits*(digits+1)/2;
    cout<<count;
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