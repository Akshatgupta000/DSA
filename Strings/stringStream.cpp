#include <iostream>
#include <sstream>
using namespace std;

// Convert String to Integer
// int main()
// {
//     string a = "123";
//     int num;

//     stringstream ss(a);
//     ss >> num;
//     cout << "Integer: " << num;
//     return 0;
// }
// __________________________________

// convert integer to string
// int main()
// {
//     int num = 123;
//     string ans;

//     stringstream ss;

//     ss << num;
//     ss >> ans;

//     cout << "String: " << ans;
// }
// __________________________________

// split sentence into words

int main()
{
    string sentence = "HEllo world";
    string word;

    stringstream ss(sentence);

    while (ss >> word)
    {
        cout << word << endl;
    }
}