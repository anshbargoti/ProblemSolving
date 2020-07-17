#include<bits/stdc++.h>
using namespace std;

int main()
{
    long t;
    cin>>t;
    while(t--)
    {
        long x,y,z;
        cin>>x>>y>>z;

        long a,b,c;

        a=min(x,y);
        b=min(x,z);
        c=min(y,z);

        if(x==max(a,b) && y==max(a,c) && z==max(b,c))
        {
            cout<<"YES"<<endl;
            cout<<a<<" "<<b<<" "<<c<<endl;
        }
        else
            cout<<"NO"<<endl;
    }
}
