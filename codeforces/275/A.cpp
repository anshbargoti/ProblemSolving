#include<bits/stdc++.h>
using namespace std;
//#define int long long

void striker()
{
    vector<vector<int>> arr{{1,1,1},{1,1,1},{1,1,1}};
    vector<pair<int,int>> vc;
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            int x;
            cin>>x;
            if(x&1==1)
                vc.push_back(make_pair(i,j));
        }
    }
    int a,b;
    for(int i=0;i<vc.size();i++)
    {
        a=vc[i].first;
        b=vc[i].second;
        arr[a][b]=abs(arr[a][b]-1);
        if(a>0)
            arr[a-1][b]=abs(arr[a-1][b]-1);
        if(b>0)
            arr[a][b-1]=abs(arr[a][b-1]-1);
        if(a<2)
            arr[a+1][b]=abs(arr[a+1][b]-1);
        if(b<2)
            arr[a][b+1]=abs(arr[a][b+1]-1);
    }
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
            cout<<arr[i][j];
        cout<<endl;
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