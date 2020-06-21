#include<iostream>
using namespace std;
int main()
{
    int n,x,y,z,x1=0,y1=0,z1=0;
    cin>>n;
    while(n--)
    {   
        cin>>x>>y>>z;
        x1+=x;
        y1+=y;
        z1+=z;
    }
    if(x1==0 && y1==0 && z1==0)
        cout<<"YES";
    else
        cout<<"NO";
}