#include <bits/stdc++.h>
using namespace std;

int main()
{
   long long t;
  cin >> t;
  while (t--) {
    long long n;
    cin >> n;
    vector<long long> a(n), b(n);
    for (long long i = 0; i < n; i++) cin >> a[i];
    for (long long i = 0; i < n; i++) cin >> b[i];
    long long l = n, r = 0;
    for (long long i = 0; i < n; i++) {
      if (a[i] != b[i]) {
        l = min(l, i);
        r = max(r, i);
      }
    }
    while (l > 0 && a[l - 1] == b[l - 1] && a[l - 1] <= a[l] &&
           a[l - 1] <= b[l]) {
      l--;
    }
    while (r < n - 1 && a[r + 1] == b[r + 1] && a[r + 1] >= a[r] &&
           a[r + 1] >= b[r]) {
      r++;
    }
    cout << l + 1 << " " << r + 1 <<endl;
  }

    return 0;
}