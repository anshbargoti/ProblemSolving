#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

void striker(int n,int arr[])
{
	int odd=0,even=0;
	for(int i=0;i<n;i++)
	{
		if(arr[i]%2==0)
			even++;
		else
			odd++;
	}
	for(int i=0;i<n;i++)
		if((arr[i]%2==0 && even==1) || (arr[i]%2!=0 && odd==1))
			cout<<i+1;
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
    	int n;
    	cin>>n;
    	int arr[n];
    	for(int i=0;i<n;i++)
    		cin>>arr[i];
    	striker(n,arr);
    	//cout<<endl;
    }
 	return 0;
}