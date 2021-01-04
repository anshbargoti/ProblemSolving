#include<bits/stdc++.h>
using namespace std;
#define int long long


//const int MOD = 1000000007;


void striker()
{
    int n;
    cin >> n;
    int arr[n];
    int count1 = 0, count2 = 0;
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    sort(arr,arr+n,greater<int>());
    for(int i = 0; i < n; i++)
    {
        if(count1 <= count2)
            count1 += arr[i];
        else
            count2 += arr[i];
    }
    cout << (count1 == count2? "YES" : "NO");
}

int32_t main(){

    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    
    int t;
    cin >> t;
    for(int i=0;i<t;i++)
    {
        //cout<<"#Case: "<<i+1<<endl;
        striker();
        cout<<endl;
    }
     return 0;
}