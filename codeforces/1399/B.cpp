#include<bits/stdc++.h>
using namespace std;

long long candy(long long arr[],long long brr[],long long n)
{
    long long a=*min_element(arr, arr + n);
    long long b=*min_element(brr, brr + n);
    long long count=0;
    for(int i=0;i<n;i++)
    {
        long long first=arr[i]-a;
        long long second=brr[i]-b;
        count=count+std::min(first,second);
        count=count+std::abs(first-second);
    }
    return count;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long t;
    cin>>t;
    while(t--)
    {
        long long n;
        cin>>n;
        long long arr[n];
        long long brr[n];
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        for(int i=0;i<n;i++)
        {
            cin>>brr[i];
        }
        cout<<candy(arr,brr,n)<<"\n";
    }
    return 0;
}