#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

void striker(int power,int n)
{
	vector<pair<int,int>> vc(n);
    for(int i=0;i<n;i++)
        cin>>vc[i].first>>vc[i].second;
    sort(vc.begin(),vc.end());
    for(int i=0;i<n;i++)
    {
        if(power<=vc[i].first)
        {
        	cout<<"NO";
        	return;
        }
        power+=vc[i].second;
    }
    cout<<"YES";
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
    	int power,n;
    	cin>>power>>n;
    	striker(power,n);
    	cout<<endl;
    }
 	return 0;
}