#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    int t;
    cin >> t;

    while (t--) {
        // ll n, k;
        // cin >> n >> k;
        // string s="";
        // for(int i=0;i<n;i++)s+=to_string(i+1);
        // ll m=k;
        // string r = s.substr(m);
        // reverse(r.begin(),r.end());
        // string p = s.substr(0,k);
        // string t= p+r;
        //  for(auto i:t)
        //  {
        //     cout<<i<<" ";
        //  }
        //  cout<<endl;
        ll n,k;cin>>n>>k;
        vector<int>v;
        for(int i=1;i<=n;i++) v.push_back(i);
        reverse(v.begin(),v.end());
        sort(v.end()-k-1,v.end());
        for(int i=0;i<n;i++)
        {
            cout<<v[i]<<" ";
        }
        cout<<endl;
       
    }

    return 0;
}
