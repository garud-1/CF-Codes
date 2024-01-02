#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        string p,q;
        cin>>p;
        cin>>q;
        int cnt=0;
        set<char>s1;
        set<char>s2;
        for(int i=0;i<p.size();i++)
        {
            s1.insert(p[i]);
            s2.insert(q[i]);
        }
        for(auto i: s1)
        {
            for(auto j: s2)
            {
                if(i==j) cnt++;
            }
        }
        if(cnt>=1) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
       
    }
    return 0;
}