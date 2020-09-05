#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

void striker(int x1,int y1,int x2,int y2)
{
    if(x1==x2)
        cout<<x1+abs(y1-y2)<<" "<<y1<<" "<<x2+abs(y1-y2)<<" "<<y2;
    else if(y1==y2)
        cout<<x1<<" "<<y1+abs(x1-x2)<<" "<<x2<<" "<<y2+abs(x1-x2);
    else if(abs(x1-x2)==abs(y1-y2))
        cout<<x1<<" "<<y2<<" "<<x2<<" "<<y1;
    else
        cout<<-1;
}

int32_t main(){

    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    
    int t=1;
    //cin>>t;
    while(t--)
    {
        int x1,y1,x2,y2;
        cin>>x1>>y1>>x2>>y2;
        striker(x1,y1,x2,y2);
        cout<<endl;
    }
     return 0;
}