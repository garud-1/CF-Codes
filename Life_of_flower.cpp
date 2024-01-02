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
        int a[n];
        int height = 1;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        for (int i = 0; i < n; i++)
        {
            if (i+1<n && a[i] == 1 && a[i + 1] == 1)
                height += 5;
            else if ( i+1<n && a[i] == 0 && a[i + 1] == 0)
            {
                height = 0;
                break;
            }
            else if (a[i] == 1)
                height += 1;
            else if (a[i] == 0)
                height += 0;
        }
        if (height == 0)
            cout << "-1" << endl;
        else
            cout << height << endl;
    }
    return 0;
}