#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin w>> t;
    while (t--) {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }

        long long total_product = 1; // Use a long long to avoid overflow
        for (int i = 0; i < n; i++) {
            total_product *= arr[i];
        }

        int left_product = 1;
        int flag = -1; // Initialize with -1, which represents no valid index found

        for (int i = 0; i < n; i++) {
            if (left_product == (total_product / arr[i])) {
                flag = i;
                break;
            }
            left_product *= arr[i];
        }

        cout << flag << endl;
    }

    return 0;
}
