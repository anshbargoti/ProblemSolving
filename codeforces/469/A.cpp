#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long
 
// void striker(string s)
// {
//     return;
// }

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
        int n,x,y;
        cin>>n>>x;
        unordered_set<int> us;
        for(int i=0;i<x;i++)
        {
            int ele;
            cin>>ele;
            us.insert(ele);
        }
        cin>>y;
        for(int i=0;i<y;i++)
        {
            int ele;
            cin>>ele;
            us.insert(ele);
        }
        if(us.size()==n)
            cout<<"I become the guy.";
        else
            cout<<"Oh, my keyboard!";
        // striker(s);
        cout<<endl;
    }
     return 0;
}