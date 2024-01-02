#include <bits/stdc++.h>
using namespace std;

int main() {
    long long n;  // Use long long for large values of n
    cin >> n;

    string s = to_string(n);
    int cnt = 0;

    for (char i : s) {
        if (i == '7' || i == '4') {
            cnt++;
        }
    }

    int a = 0;
    string ans = to_string(cnt);

    for (char i : ans) {
        if (i == '7' || i == '4') {
            a++;
        } else {
            break;
        }
    }

    if (a == ans.length()) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}
