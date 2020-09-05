#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

void striker(int n,int arr[])
{
	vector<int> v1;
	vector<int> v2;
	vector<int> v3;
	for(int i=0;i<n;i++)
	{
		if(arr[i]==1)
			v1.push_back(i+1);
		else if(arr[i]==2)
			v2.push_back(i+1);
		else
			v3.push_back(i+1);
	}
	int w=min(min(v1.size(),v2.size()),v3.size());
	cout<<w<<endl;
	for(int i=0;i<w;i++)
	{
		cout<<v1[i]<<" "<<v2[i]<<" "<<v3[i]<<endl;
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
    	int n;
    	cin>>n;
    	int arr[n];
    	int count1=0,count2=0,count3=0;
    	for(int i=0;i<n;i++)
    		cin>>arr[i];
    	striker(n,arr);
    	cout<<endl;
    }
 	return 0;
}