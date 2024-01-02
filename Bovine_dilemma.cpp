#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)

    {
        int n;
        cin >> n;
        vector<int> a;
        set<int> s;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        for (int i = 0; i < n; i++)
        {
            for (int j = i; j < n; j++)
            {

                s.insert(a[j] - a[i]);
            }
        }
        cout << s.size() << endl;
        
    }
    return 0;
}