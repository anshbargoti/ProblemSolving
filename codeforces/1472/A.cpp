#include<bits/stdc++.h>
using namespace std;



//#define int long long
//const int MOD = 1000000007;


void striker()
{
    int w, h, n;
    cin >> w >> h >> n;
    int count = 1;
    if (w % 2 == 1 && h % 2 == 1 && n > 1)
        cout << "NO";
    else if (n == 1)
        cout << "YES";
    else
    {
        while (count < n)
        {
            if (w % 2 == 0 && h % 2 == 0)
            {
                count *= 4;
                w /= 2;
                h /= 2;
            }
            else if (w % 2 == 0)
            {
                count *= 2;
                w /= 2;
            }
            else if (h % 2 == 0)
            {
                count *= 2;
                h /= 2;
            }
            else
                break;
        }
        cout << (count >= n ? "YES" : "NO");
    }
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