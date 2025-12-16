#include <iostream>
using namespace std;
int main () {
    int n;
    cout << "Enter a number: \n";
    cin >> n;

    if (n % 2 == 0 and n % 3 == 0) { // *** and = && ; or = || ***
        cout << "This is divisible by 6"; // If only one statement no need of {}
    }
    else {
        cout << "This is not divisible by 6";
    }

    return 0;
}