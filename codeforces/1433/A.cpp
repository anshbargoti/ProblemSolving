#include<bits/stdc++.h>
using namespace std;
#define int long long
 
void striker()
{
    int x;
    cin>>x;
    int digits=log10(x)+1;
    int count=(x%10-1)*10;
    if(digits==1)
        count+=1;
    else if(digits==2)
        count+=3;
    else if(digits==3)
        count+=6;
    else
        count+=10;
    cout<<count;
}
 
int32_t main(){
 
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
 
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        //cout<<"#Case: "<<i+1<<endl;
        striker();
        cout<<endl;
    }
     return 0;
}