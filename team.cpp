#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int cnt = 0, ans = 0;
    // vector<vector<int>>r;
    int arr[n][3];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin >> arr[i][j];
            if (arr[i][j] == 1)
                cnt++;
        }
        if (cnt > 1)
        {
            ans++;
        }
        cnt = 0;
    }
     cout<<ans<<endl;
    return 0;
}