#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
//#define int long long

void striker(int r,int c)
{
    char ch;
    set<int> row;
    set<int> col;
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            cin>>ch;
            if(ch=='S')
            {
                row.insert(i);
                col.insert(j);
            }
        }
    }

    cout<<r*c-row.size()*col.size();
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
    while(t--)
    {
        int r,c;
        cin>>r>>c;
        striker(r,c);
        cout<<endl;
    }
     return 0;
}