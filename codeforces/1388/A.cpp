#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    {
        long n;
        cin>>n;
        if(n<31)
            cout<<"NO";
        else if(n==36)
            cout<<"YES"<<"\n"<<5<<" "<<6<<" "<<10<<" "<<15;
        else if(n==40)
            cout<<"YES"<<"\n"<<6<<" "<<10<<" "<<15<<" "<<9;
        else if(n==44)
            cout<<"YES"<<"\n"<<6<<" "<<7<<" "<<10<<" "<<21;
        else
            cout<<"YES"<<"\n"<<6<<" "<<10<<" "<<14<<" "<<(n-30);
        cout<<'\n';
    }
}
