#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

void striker(int n,int m)
{
	int count=0;
	if(m>n)
	{
		cout<<-1;
		return;
	}
	else
	{
		count=(n+1)/2;
		if(count%m!=0)
		{
			count+=m-count%m;
		}
	}
	cout<<count;
}

int32_t main(){

	ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	
    int t=1;
    //cin>>t;
    while(t--)
    {
    	int n,m;
    	cin>>n>>m;
    	striker(n,m);
    	cout<<endl;
    }
 	return 0;
}