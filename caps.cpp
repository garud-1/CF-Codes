#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
  ll n, k;
  cin >> n >> k;
  if (n % 2 == 0)
  {
    if (k <= n / 2)
    {
      if (k == 1)
        cout << 1 << endl;
      else
        cout << (2 * k - 1) << endl;
    }
    else if (k > n / 2)
    {
      int c = 2*(k - n / 2);
      cout << c << endl;
    }
  }
  else
  {
    if (k <= (n + 1) / 2)
    {
      if (k == 1)
        cout << 1 << endl;
      else
        cout << (2 * k - 1) << endl;
    }
    else if (k > (n + 1) / 2) // Removed extra 
    {
      int c = 2 * (k - ((n + 1) / 2));
      cout << c << endl;
    }
  }

  return 0;
}
 