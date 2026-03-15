#include <iostream>
#include <algorithm> // Include for std::reverse
#include <string>

using namespace std;

int main() {
    string str;

    // Prompt the user for input
    cout << "Enter a string: ";
    getline(cin, str); // Use getline to allow spaces in the input

    // Reverse the string using std::reverse
    reverse(str.begin(), str.end());

    // Display the reversed string
    cout << "Reversed string: " << str << endl;

    return 0;
}