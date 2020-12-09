#include<bits/stdc++.h>
using namespace std;

//#define int long long
// const int MOD = 1000000007;

void striker()
{
    int n;
    cin>>n;
    map<int,vector<int>> mp;
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        mp[x].push_back(i+1);
    }
    // cout<<mp.size();
    vector<pair<int,int>> v;
    for(auto it:mp)
    {
        if(it.second.size()<3)
            it.second.size()==1?v.push_back(make_pair(it.first,0)):v.push_back(make_pair(it.first,it.second[1]-it.second[0]));
        else
        {
            vector<int> temp=it.second;
            int comm_diff=temp[1]-temp[0];
            int flag=1;
            for(int i=1;i<temp.size()-1;i++)
            {
                if(temp[i+1]==temp[i]+comm_diff)
                    continue;
                else
                {
                    flag=0;
                    break;
                }
            }
            if(flag==1)
                v.push_back(make_pair(it.first,comm_diff));
        }
    }
    cout<<v.size()<<endl;
    for(auto it:v)
        cout<<it.first<<" "<<it.second<<endl;
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
    for(int i=0;i<t;i++)
    {
        //cout<<"#Case: "<<i+1<<endl;
        striker();
        cout<<endl;
    }
     return 0;
}