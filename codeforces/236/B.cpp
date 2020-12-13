#include<bits/stdc++.h>
using namespace std;
#define int long long
const int MOD = 1073741824;

void striker()
{
    int a,b,c;
    cin>>a>>b>>c;
    int count_div[1000001]={0};
    for(int i=1;i<=a*b*c;i++)
    {
        for(int j=i;j<=a*b*c;j+=i)
        {
            count_div[j]++;
        }
    }

    int sum=0;

    for(int i=1;i<=a;i++)
    {
        for(int j=1;j<=b;j++)
        {
            for(int k=1;k<=c;k++)
            {
                sum+=(count_div[i*j*k])%MOD;
            }
        }
    }
    cout<<sum;
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