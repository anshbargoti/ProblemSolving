#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int N;
        N=2*n;
        vector<int> v;
        for(int i=0;i<N;i++)
        {
            int ele;
            cin>>ele;
            if ( std::find(v.begin(), v.end(), ele) == v.end() )
                v.push_back(ele);
            else
                continue;
        }
        for (auto ir = v.begin(); ir != v.end(); ++ir)
            cout << *ir << " ";
        cout<<endl;
    }
}
