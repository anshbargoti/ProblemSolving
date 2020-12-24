#include<bits/stdc++.h>
using namespace std;
char arr[12][12];

//#define int long long
//const int MOD = 1000000007;


bool check(int a,int b)
{
    if (arr[a][b] == 'W')
    {
        arr[a][b] = '.';
        return true;
    }
    return false;
}

void striker()
{
    int n, m;
    cin >> n >> m;
    memset(arr,'.',sizeof(arr));
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            cin >> arr[i][j];
        }
    }
    int count = 0;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            if (arr[i][j] == 'P')
            {
                if (check(i-1,j))
                    count++;
                else if (check(i+1,j))
                    count++;
                else if (check(i,j-1))
                    count++;
                else if (check(i,j+1))
                    count++;
                arr[i][j] == '.';
            }
        }
    }
    cout << count;
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