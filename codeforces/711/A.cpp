#include<bits/stdc++.h>
using namespace std;



//#define int long long
// const int MOD = 1000000007;



void striker()
{
    int n;
    cin>>n;
    string arr[n];
    bool flag = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        string temp = arr[i];
        if (flag == 0 && arr[i][0] == 'O' && arr[i][1] == 'O')
        {
            flag = 1;
            arr[i] = "++" + temp.substr(2, 3);
        }
        else if (flag == 0 && arr[i][3] == 'O' && arr[i][4] == 'O')
        {
            flag = 1;
            arr[i] = temp.substr(0, 3) + "++";
        }
    }
    if (flag == 0)
        cout << "NO";
    else
    {
        cout << "YES" << endl;
        for (int i = 0; i < n; i++)
            cout << arr[i] << "\n";
    }
}

int32_t main(){

    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    
    int t = 1;
//    cin >> t;
    for(int i = 0; i < t; i++)
    {
        //cout<<"#Case: "<<i+1<<endl;
        striker();
        //cout << endl;
    }
    return 0;
}