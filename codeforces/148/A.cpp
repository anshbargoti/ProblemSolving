#include<bits/stdc++.h>
using namespace std;
#define int long long

// const int MOD = 1000000007;

//  n(AUBUCUD)= ∑n|A| - ∑n|A∩B| + ∑n|A∩B∩C| - n|A+B+C+D|

void striker()
{
    int k,l,m,n,d;
    cin>>k>>l>>m>>n>>d;
    int n1,n2,n3,n4;
    n1=d/k+d/l+d/m+d/n;
    n2=d/lcm(k,l)+d/lcm(k,m)+d/lcm(k,n)+d/lcm(l,m)+d/lcm(l,n)+d/lcm(m,n);
    n3=d/lcm(lcm(k,l),m)+d/lcm(lcm(k,l),n)+d/lcm(lcm(k,m),n)+d/lcm(lcm(l,m),n);
    n4=d/lcm(lcm(k,l),lcm(m,n));
    cout<<n1-n2+n3-n4;
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