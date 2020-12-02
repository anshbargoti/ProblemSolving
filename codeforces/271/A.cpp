#include<bits/stdc++.h>
using namespace std;
//#define int long long

bool distinct_digit(int i,map<int,int> visited)
{
    visited[i%10]++;
    i=i/10;
    visited[i%10]++;
    i=i/10;
    visited[i%10]++;
    i=i/10;
    visited[i%10]++;
    for(auto it:visited)
    {
        if(it.second>1)
            return false;
    }
    return true;
}

void striker()
{
    map<int,int> visited;
    int year;
    cin>>year;
    for(int i=year+1;i<INT_MAX;i++)
    {
        if(distinct_digit(i,visited))
        {
            cout<<i;
            return;
        }
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