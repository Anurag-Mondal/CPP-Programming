#include <iostream>
using namespace std;
int main () {
    int n;
    cout << "Enter no. of first natural numbers to be printed: ";
    cin >> n;

    int i = 1;
    do {
        cout << i << " ";   // At least run 1 time
        i++;
    }
    while (i <= 0);
    return 0;
}