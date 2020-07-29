#include<bits/stdc++.h>
using namespace std;
int main()
{
    long t;
    cin>>t;
    while(t--)
    {
        long long l,r;
        cin>>l>>r;
        bool c=false;
        long long a=l,b=0;
        if(2*l<=r)
        {
            b=2*l;
            c=true;
        }
        if(c)
            cout<<a<<" "<<b<<endl;
        else
            cout<<-1<<" "<<-1<<endl;
    }
    return 0;
}
