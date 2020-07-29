#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
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
   /*     else{
            for(int i=l+1;i<=r;i++)
            {
                if(i%a==0 && a!=i)
                {
                    b=i;
                    c=true;
                }
                if(c)
                    break;
                else
                    continue;
            }
        }*/
        if(c)
            cout<<a<<" "<<b<<endl;
        else
            cout<<-1<<" "<<-1<<endl;
    }
    return 0;
}
