#include <iostream>
#include <algorithm>
using namespace std;
int main () {

    string s1 = "Anurag";
    cout << s1 << endl;

    cout << s1.length() << endl; // or s3.size (), FINDS THE LENGTH OF THE STRING

    s1.append (" Mondal"); // Adds another string
    cout << s1 << endl;
    s1 += " Coder";        // Another way to add a string
    cout << s1 << endl;

    s1.pop_back ();     // Removes last character from the end
    cout << s1 << endl;

    s1.push_back ('a'); // Adds a character to the end
    cout << s1 << endl;

    reverse (s1.begin () , s1.end ()); // Reverses a string
    cout << s1 << endl;
    reverse (s1.begin () , s1.begin () + 3); // Reverses first 3 characters of the string
    cout << s1 << endl;

    int x = 546;
    s1 = to_string (x); // Converts x into string
    cout << s1 << endl;

    int y = stoi (s1); // Converts s1 into an integer
    cout << y+1 << endl;

    s1.clear ();        // empties the string
    cout << s1 << endl;
}