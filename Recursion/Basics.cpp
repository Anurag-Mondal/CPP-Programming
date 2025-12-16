#include <iostream>
using namespace std;
void greet (int n) {
    if (n == 0) return;
    cout << n << endl;
    greet (n-1);        // Recursion
    cout << n << endl;
}
int main () {
    int n;
    cout << "Enter a no. : ";
    cin >> n;
    greet (n);
}