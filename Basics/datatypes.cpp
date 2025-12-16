#include <iostream>
using namespace std;
int main () {

    // Variable name can start with _ or $ or alphabets but not numbers. 
    // Variable name can contain alphabets, numbers but not special charactrs except _ and $
    // Certain keywords are not allowed like int, float. To be safe start with a capital letter

    int x = 9; // int datatype declaration
    cout << x << endl;
    
    int a,b;         // 2.5 is rounded to 2 [GIF]
    a = 9, b = 10;
    cout << a*b << endl;

    a = 20;         // Updation of values
    a = a + 1;
    a += 9;
    a++;     
    cout << a << endl;

    float f = 5.0/2;    // float datatype
    cout << f << endl;

    char y;
    cout << "Enter a character: ";
    cin >> y;                       // Input function
    cout << "The value of y is : " << y << endl;
    cout << "The ascii value of y is: " << (int)y << endl;
    return 0;
}