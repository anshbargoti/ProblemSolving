#include<bits/stdc++.h>
using namespace std;



//#define int long long
// const int MOD = 1000000007;



void striker()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    int i = 0, j = n - 1, flag = 1;
    int s = 0, d = 0;
    while (i <= j)
    {
        if (flag)
        {
            if (arr[i] > arr[j])
            {
                s += arr[i];
                i++;
            }
            else
            {
                s += arr[j];
                j--;
            }
            flag = 0;
        }
        else
        {
            if (arr[i] > arr[j])
            {
                d += arr[i];
                i++;
            }
            else
            {
                d += arr[j];
                j--;
            }
            flag = 1;
        }
    }
    cout << s << " " << d;
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
        cout << endl;
    }
    return 0;
}