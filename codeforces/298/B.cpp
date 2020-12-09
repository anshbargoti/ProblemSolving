#include<bits/stdc++.h>
using namespace std;
#define int long long

// const int MOD = 1000000007;

void striker()
{
    int t,sx,sy,ex,ey;
    cin>>t>>sx>>sy>>ex>>ey;
    string s;
    cin>>s;
    int count_x=0,count_y=0;
    char charx,chary;
    if(ex-sx>=0)
    {
        charx='E';
        count_x=ex-sx;
    }
    else
    {
        charx='W';
        count_x=abs(ex-sx);
    }
    if(ey-sy>=0)
    {
        chary='N';
        count_y=ey-sy;
    }
    else
    {
        chary='S';
        count_y=abs(ey-sy);
    }
    int temp_x=0,temp_y=0;
    for(int i=0;i<t;i++)
    {
        if(s[i]==charx)
            temp_x++;
        else if(s[i]==chary)
            temp_y++;
    }
    if(temp_x<count_x || temp_y<count_y>0)
    {
        cout<<-1;
        return;
    }
    int ans=0;
    for(int i=0;i<t;i++)
    {
        if(count_y>0 || count_x>0)
        {
            if(s[i]==charx)
                count_x--;
            else if(s[i]==chary)
                count_y--;
            ans++;
        }
    }
    cout<<ans;
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