#include <iostream>
using namespace std;
 
int main() {
    int arr[5][5];
    int row = -1;
    int col = -1;
 
    for (int i = 0; i < 5; i++)
        for (int j = 0; j < 5; j++) {
            cin >> arr[i][j];
        }
 
    for (int i = 0; i < 5; i++)
        for (int j = 0; j < 5; j++) {
            if (arr[i][j] == 1) {
                row = i;
                col = j;
            }
        }
 
    int total_swaps = abs(2 - row) + abs(2 - col);
 
    cout << total_swaps;
 
    return 0;
}