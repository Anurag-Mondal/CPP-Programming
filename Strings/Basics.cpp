#include <iostream>
using namespace std;
int main () {

    string s2 = "My name is Anurag"; // Way to declare string in c++
    cout << s2 << endl;
    
    string s3;
    cout << "Enter a string: ";
    // cin >> s3;                  // Only first word will be taken as input
    getline (cin,s3);   // Now entire string will be taken as input
    cout << s3 << endl;
} 