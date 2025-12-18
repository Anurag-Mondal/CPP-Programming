#include <iostream>
using namespace std;
void reverse (int n) {
    if (n == 0) return;
    cout << n % 10;
    n /= 10;
    reverse (n);
}
int main () {
    int n;
    cout << "Enter a number: ";
    cin >> n;
    cout << "The reverse is: ";
    reverse (n);
    return 0;
}