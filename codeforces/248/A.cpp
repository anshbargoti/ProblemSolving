#include<bits/stdc++.h>
using namespace std;
#define int long long

// const int MOD = 1000000007;

void striker()
{
    int n;
    cin>>n;
    int x,y;
    vector<int> left(2,0);
    vector<int> right(2,0);
    for(int i=0;i<n;i++)
    {
        cin>>x>>y;
        left[x]++;
        right[y]++;
    }
    cout<<min(left[0],left[1])+min(right[0],right[1]);
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