#include <bits/stdc++.h>
using namespace std;

int main()
{
    int s, n;
    cin >> s >> n;

    vector<pair<int, int>> r;
     bool insufficientstrngth=false;
      for (int i = 0; i < n; i++)
    {
        int a, b;
        cin >> a>>b;
        r.push_back({a, b});
    }
    sort(r.begin(),r.end());
    for (int i = 0; i < n; i++)
    {
          if ((s - r[i].first) <= 0)
        {
            // cout << "NO" << endl;
            insufficientstrngth=true;
            break;
        }
        // break;

        else s += r[i].second;
    }
    if(insufficientstrngth) cout<<"NO"<<endl;
    else cout<<"YES"<<endl;
    
    return 0;
}
