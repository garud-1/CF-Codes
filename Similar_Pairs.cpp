#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int a;cin>>a;
        vector<int>result;
        vector<pair<int,int>>e;
        for(int i=0;i<a;i++)
        {
            int n;cin>>n;
            result.push_back(n);
        }
        sort(result.begin(),result.end());
        for(auto i:result)
        {
            if((abs(i-(i+1))==1) && i<result.size()) e.push_back({i,i+1});
        }
        
    }

    return 0;
}