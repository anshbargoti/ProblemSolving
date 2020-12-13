#include<bits/stdc++.h>
using namespace std;
#define int long long
const int MOD = 1073741824;
int total_divisor[1000001];

int count_divisor(int n) 
{
    if(total_divisor[n]!=0)
        return total_divisor[n];
    
    int count=0;
    for(int i=1;i<=sqrt(n);i++) 
    { 
        if(n%i==0) 
        {
            if(n/i==i) 
                count++;
            else
                count+=2;
        } 
    }
    total_divisor[n]=count;
    return count;
}

void striker()
{
    int a,b,c;
    cin>>a>>b>>c;
    int sum=0;
    for(int i=1;i<=a;i++)
    {
        for(int j=1;j<=b;j++)
        {
            for(int k=1;k<=c;k++)
            {
                sum=(sum+count_divisor(i*j*k));
                sum=sum%MOD;
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