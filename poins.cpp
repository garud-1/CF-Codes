#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        vector<int> a(2 * n);
        
        for (int i = 0; i < 2 * n; i++) {
            cin >> a[i];
        }

        sort(a.begin(), a.end());

      
        long long p = 0;
        for (int i = 0; i < 2*n-1; i++) {
            p += static_cast<long long>(abs(a[i]-a[i+1]));
        }
        int s=0,e=a.size()-1,mid=s+(e-s)/2;

        cout << p-(abs(a[mid]-a[mid+1]))<< endl;

      
        for (int i = 0; i < n; i++) {
            cout << a[i] << " " << a[2*n-i-1] << endl;
        }
    }d

    return 0;
}
