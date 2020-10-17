#include<bits/stdc++.h>
using namespace std;
#define int long long

void striker()
{
    int x1,y1,x2,y2;
    cin>>x1>>y1>>x2>>y2;
    cout<<((x1!=x2 && y1!=y2)?abs(x2-x1)+abs(y2-y1)+2:abs(x2-x1)+abs(y2-y1));
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