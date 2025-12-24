#include <iostream>
using namespace std;
int main () {
    int arr [5][6];
    for (int r = 0; r < 5; r++) {
        for (int c = 0; c < 6; c++) {
            cout << "Enter the (" << r << "," << c << ") term: ";
            cin >> arr [r][c];
        }
    }

    for (int r = 0; r < 5; r++) {
        for (int c = 0; c < 6; c++) {
            cout << arr [r][c] << " ";
        }
        cout << endl;
    }
}