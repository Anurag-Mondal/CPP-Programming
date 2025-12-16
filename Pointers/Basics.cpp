#include <iostream>
using namespace std;
int main () {
    int x = 5;
    int* p = &x;
    cout << &x << endl;
    cout << p << endl;
    *p *= 6;
    cout << x << endl;
}