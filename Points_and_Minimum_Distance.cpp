#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;cin>>n;
        vector<int>a(2*n);
        // vector<pair<int,int>>r;
        // int ans=0;
        for(int i=0;i<2*n;i++)
        {
            cin>>a[i];
        }
        sort(a.begin(),a.end());
        // for(auto i: a)
        // {
        //     r.push_back({i,n-i});
        // }
        // for(auto i=r.begin();i!=prev(r.end());i++)
        // {/
        //    int c=*i;
        //    int n=*next(i);
        // }
        long long p=0;
        for(int i=0;i<n;i++)
        {
            p+=static_cast<long long>(a[i+n]-a[i]);
        }
        cout<<p<<endl;
        for(int i=0;i<n;i++)
        {
            cout<<a[i]<<" "<<a[i+n]<<endl;
        }

    }
    return 0;
}