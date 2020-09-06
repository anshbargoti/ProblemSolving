#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

void striker(int n,int m)
{
	char arr[n][m];
	for(int i=0;i<n;i++)
		for(int j=0;j<m;j++)
			arr[i][j]='#';

	for(int i=1;i<n;i+=4)
	{
		int j=0;
		while(j<m-1)
		{
			arr[i][j]='.';
			j++;
		}
	}
	for(int i=3;i<n;i+=4)
	{
		int j=m-1;
		while(j>0)
		{
			arr[i][j]='.';
			j--;
		}
	}
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
			cout<<arr[i][j];
		cout<<endl;
	}
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
    	int n,m;
    	cin>>n>>m;
    	striker(n,m);
    	//cout<<endl;
    }
 	return 0;
}