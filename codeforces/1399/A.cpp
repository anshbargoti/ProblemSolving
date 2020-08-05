#include<bits/stdc++.h>
using namespace std;

bool remov(int arr[],int n)
{
    if(n==1)
        return true;
    sort(arr,arr+n);
    for(int i=1;i<n;i++)
    {
        if(abs(arr[i]-arr[i-1])>1)
            return false;
    }
    return true;

}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        if(remov(arr,n))
            cout<<"YES"<<"\n";
        else
            cout<<"NO"<<"\n";
    }
    return 0;
}