#include <iostream>
using namespace std;
int main () {
    int n;
    cout << "Enter no. of first natural numbers to be printed: ";
    cin >> n;

    for (int i = 1; i <= n; i++) {
        cout << i << " ";
    }
    return 0;
}