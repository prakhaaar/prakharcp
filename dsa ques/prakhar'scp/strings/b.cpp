#include <bits/stdc++.h>  // Includes all standard C++ libraries
using namespace std;      // Allows usage of standard names without prefixing 'std::'

int main()
{
    string s;  // Declare a string variable to store input

    // Read input from the user until a backslash ('\') is encountered
    // '\\' is used because '\' is an escape character, so we escape it to represent a literal backslash
    getline(cin, s, '\\');  

    // Output the string read before the backslash
    cout << s << "\n";

    return 0;  // Optional: Indicates successful program termination
}
