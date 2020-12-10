#include<bits/stdc++.h>
using namespace std;

//#define int long long
// const int MOD = 1000000007;

void striker()
{
    int n;
    cin>>n;
    int count[8]={0};
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        count[x]++;
    }

    if(count[5]>0 || count[7]>0)
    {
        cout<<-1<<endl;
        return;
    }
    else
    {
        // 1,2,4
        // 1,3,6
        // 1,2,6
    
        count[1]-=count[4];
        count[2]-=count[4];
        if(count[1]<0 || count[2]<0 || count[1]!=count[6] || count[2]+count[3]!=count[1])
            cout<<-1<<endl;
        else
        {
            for(int i=0;i<count[4];i++)
                cout<<1<<" "<<2<<" "<<4<<endl;
            for(int i=0;i<count[3];i++)
                cout<<1<<" "<<3<<" "<<6<<endl;
            for(int i=0;i<count[2];i++)
                cout<<1<<" "<<2<<" "<<6<<endl;
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
        //cout<<endl;
    }
     return 0;
}