#include <iostream>
using namespace std;
int main () {
    int n;
    cout << "Enter a number: \n";
    cin >> n;
    (n % 2 == 0) ? cout << "This is divisible by 2" : cout << "This is not divisible by 2";
    return 0;
}