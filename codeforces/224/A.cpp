#include<bits/stdc++.h>
using namespace std;

//#define int long long
// const int MOD = 1000000007;

// A rectangular parallelepiped is a three-dimensional structure
// whose all the six faces are in a rectangular shape and 
// the length of the parallel edges are equal.
// For a vertex=> Area1=ab, Area2=bc, Area3=ca.

void striker()
{
    int area1,area2,area3;
    cin>>area1>>area2>>area3;
    cout<<4*(sqrt(area1*area2/area3) + sqrt(area2*area3/area1) + sqrt(area1*area3/area2));
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