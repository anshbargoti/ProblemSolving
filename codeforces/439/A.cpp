#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

void striker(int n,int d,int arr[],int sum)
{
	int joke=2*(n-1);
	if(d>=sum)
		joke+=(d-sum)/5;
	cout<<joke;
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
    while(t--)
    {
    	int n,d;
    	cin>>n>>d;
    	int arr[n];
    	int sum=0;
    	for (int i=0;i<n;i++)
    	{
    		cin>>arr[i];
    		sum+=arr[i];
    	}
    	sum+=10*(n-1);
    	if(sum>d)
    		cout<<-1;
    	else
	    	striker(n,d,arr,sum);
    	cout<<endl;
    }
 	return 0;
}