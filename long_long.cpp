#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, cnt = 0 , sum =0;
        cin >> n;
        vector<int> v;
        int ans = 0;
        for (int j = 0; j < n; j++)
        {
            int a;
            cin >> a;
            if (a < 0)
                v.push_back((a * -1));

            else
                v.push_back(a);

            ans = accumulate(v.begin(), v.end(), 0);
        }
        for (auto k : v)
        {
            if(k<0)  cnt++;
            if(k ==0) sum++;
        }

        if(cnt ==v.size() || cnt+sum == v.size()) cout<<"1"<<endl;
        else if(cnt == 0)  cout<<"0"<<endl;
        else cout<<cnt-1<<" "<<ans<<endl;
    }
    return 0;
}