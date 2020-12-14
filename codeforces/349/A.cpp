#include<bits/stdc++.h>
using namespace std;

//#define int long long
// const int MOD = 1000000007;

void striker()
{
    int n;
    cin>>n;
    int cost_25=0,cost_50=0,cost_100=0;
    int flag=true;
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        if(flag)
        {
            if(x==25)
                cost_25++;
            else if(x==50 && i>0)
            {
                if(cost_25>=1)
                {
                    cost_25--;
                    cost_50++;
                }
                else
                {
                    flag=false;
                    break;
                }
            }
            else if(x==100 && i>2)
            {
                if(cost_50>=1 && cost_25>=1)
                {
                    cost_25--;
                    cost_50--;
                }
                else if(cost_25>=3)
                    cost_25-=3;
                else
                {
                    flag=false;
                    break;
                }
            }
            else
            {
                flag=false;
                break;
            }
        }
    }
    cout<<(flag?"YES":"NO");
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