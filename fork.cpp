#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()

{
    int t;cin>>t;
    while(t--)
    {
        ll a,b;cin>>a>>b;
        ll xk,yk;cin>>xk>>yk;
        ll xq,yq;cin>>xq>>yq;
        
        vector<pair<ll,ll>>king;
        vector<pair<ll,ll>>queen;
        king.push_back({xk+a,yk+b});
        king.push_back({xk-a,yk-b});
        king.push_back({xk+b,yk+a});
        king.push_back({xk-b,yk-a});
        king.push_back({xk+a,yk-b});
        king.push_back({xk-a,yk+b});
        king.push_back({xk+b,yk-a});
        king.push_back({xk-b,yk+a});

        
        queen.push_back({xq+a,yq+b});
        queen.push_back({xq-a,yq-b});
        queen.push_back({xq+b,yq+a});
        queen.push_back({xq-b,yq-a});
        queen.push_back({xq+a,yq-b});
        queen.push_back({xq-a,yq+b});
        queen.push_back({xq+b,yq-a});
        queen.push_back({xq-b,yq+a});
        
        set<pair<ll,ll>>s;
        for(int i=0;i<8;i++)
        {
            for(int j=0;j<8;j++)
            {
               if(king[i].first==queen[j].first && king[i].second==queen[j].second) s.insert({king[i].first,king[i].second});
            }
        }
        cout<<s.size()<<endl;
    }
    return 0;
}