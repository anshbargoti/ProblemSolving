#include<bits/stdc++.h>
using namespace std;


//#define int long long
//const int MOD = 1000000007;


int result(int x, int y, int z)
{
    if ((x + y - z) / 2 < 0)
        return -1;
    return (x + y - z) / 2;
}


void striker()
{
    int a, b, c;
    cin >> a >> b >> c;
    int bond1, bond2, bond3;
    bond1 = result(c, b, a);
    bond2 = result(c, a, b);
    bond3 = result(b, a, c);
    if (bond1 == -1 || bond2 == -1 || bond3 == -1 || (a + b + c) % 2 != 0)
        cout << "Impossible";
    else
        cout << bond3 << " " << bond1 << " " << bond2;
}

int32_t main(){

    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    
    int t = 1;
//    cin>>t;
    for(int i=0;i<t;i++)
    {
        //cout<<"#Case: "<<i+1<<endl;
        striker();
        cout<<endl;
    }
     return 0;
}