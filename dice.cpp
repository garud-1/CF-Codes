#include <bits\stdtr1c++.h>
using namespace std;
int main()
{
    int i, n, s, r, ans, pos, t, sum;
    cin >> t;

    while (t--)
    {
        cin >> n >> s >> r;
        sum = s - r;
        cout << sum << " ";
        pos = n - 1;
        while (pos)
        {
            ans = r / pos;
            r = r - ans;
            cout << ans << " ";
            pos--;
        }
        cout << endl;
    }

    return 0;
}