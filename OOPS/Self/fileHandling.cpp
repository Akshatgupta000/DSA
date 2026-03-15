// There are two ways to open a file :
// 1. By Contructor method 
// 2. By function open() method
// Both ways are defined below

#include<iostream>
#include<fstream>
#include<string>
using namespace std;

int main(){
    ofstream write("File1.txt"); // Give access to write on file. This is a constructor method
    string str1 = "This is File1.txt"; // a string
    write<<str1; // take string as input in file

    ifstream read("File1.txt"); // Give access to read the file
    string str2; // sting variable to store string present inside the file
    getline(read, str2); // take file's string as a input in given variable
    cout<<str2; // for output
}

//----------------------------------------------------------------------------------------------------------------

// #include<iostream>
// #include<fstream>
// #include<string>
// using namespace std;

// int main(){
//     ofstream write("File2.txt");
//     string str1;
//     cout<<"Write something here: ";
//     getline(cin, str1);
//     write<<str1;
//     write.close(); // close() function free the file from changes
//     cout<<"Writing part free."<<endl;

//     ifstream read("File2.txt");
//     string str2;
//     getline(read, str2);
//     cout<<"Content inside the File2.txt is: "<<str2<<endl; 
//     read.close(); // close() function free the file.
//     cout<<"Reading part free."<<endl;

//     return 0;
// }


//----------------------------------------------------------------------------------------------------------------


// #include<iostream>
// #include<fstream>
// #include<string>
// using namespace std;

// int main(){
//     ofstream write;
//     write.open("File2.txt"); // accessing file using open() file class member function for writing
//     string str1;
//     cout<<"Write something here: ";
//     getline(cin, str1);
//     write<<str1;
//     write.close();
//     cout<<"Writing part free."<<endl;

//     ifstream read;
//     read.open("File2.txt"); // accessing file using open() file class member function for reading
//     string str2;
//     getline(read, str2);
//     cout<<"Content inside the File2.txt is: "<<str2<<endl; 
//     read.close();
//     cout<<"Reading part free."<<endl;

//     return 0;
// }


//----------------------------------------------------------------------------------------------------------------


// #include<iostream>
// #include<fstream>
// #include<string>
// using namespace std;

// int main(){
//     ofstream write;
//     write.open("File3.txt");
//     string str1 = "This is line 1\n";
//     string str2 = "This is line 2\n";
//     string str3 = "This is line 3\n";
//     write<<str1<<str2<<str3;
//     write.close();
//     cout<<"Writing part free."<<endl;

//     ifstream read;
//     read.open("File3.txt");
//     string str4;
//     cout<<"Content inside the File3.txt is: "<<endl;
//     // while(read.eof()==0){ // this Loop is use to read multiple line from the given file.
//     while(getline(read, str4)){ // this Loop is use to read multiple line from the given file.
//         // getline(read, str4);
//         cout<<str4<<endl; 
//     }
//     read.close();
//     cout<<"Reading part free."<<endl;

//     return 0;
// }

//----------------------------------------------------------------------------------------------------------------


// Example of Writing to a Binary File:
// In this example, we write an integer and a float to a binary file:

// #include <iostream>
// #include <fstream>
// using namespace std;

// int main() {
//     // Open file in binary mode for writing
//     ofstream outFile("data.bin", ios::binary);
    
//     // Check if file opened successfully
//     if (!outFile) {
//         cout << "Error opening file for writing!" << endl;
//         return 1;
//     }

//     // Data to be written
//     int number = 100;
//     float pi = 3.14;

//     // Write data in binary format
//     // outFile.write(reinterpret_cast<char*>(&number), sizeof(number));
//     outFile.write((char*)(&number), sizeof(number));
//     outFile.write(reinterpret_cast<char*>(&pi), sizeof(pi));

//     // Close the file
//     outFile.close();
//     cout << "Data written to binary file." << endl;

//     return 0;
// }


//----------------------------------------------------------------------------------------------------------------


// Example of Reading from a Binary File:
// Here’s how to read the data from the binary file:

// #include <iostream>
// #include <fstream>
// using namespace std;

// int main() {
//     // Open file in binary mode for reading
//     ifstream inFile("data.bin", ios::binary);

//     // Check if file opened successfully
//     if (!inFile) {
//         cerr << "Error opening file for reading!" << endl;
//         return 1;
//     }

//     int number;
//     float pi;

//     // Read data from the file
//     inFile.read(reinterpret_cast<char*>(&number), sizeof(number));
//     inFile.read(reinterpret_cast<char*>(&pi), sizeof(pi));

//     // Close the file
//     inFile.close();

//     // Output the data read
//     cout << "Number: " << number << endl;
//     cout << "Pi: " << pi << endl;

//     return 0;
// }


//----------------------------------------------------------------------------------------------------------------

// Write and read array element to a binary file.

// #include <fstream>
//  #include <iostream>
//  using namespace std;
//  int main() {
//     int n;
//     cin >> n;
//     if (n < 1 || n > 100) {
//         cout << "Invalid entry" << endl;
//         return 0;
//     }
//     int numbers[n];
//     for (int i = 0; i < n; i++) {
//         cin >> numbers[i];
//     }
//     ofstream myfile1("numbers.dat", ios::out | ios::binary);
//     if (myfile1.is_open()) {
//         myfile1.write((char*)&numbers, sizeof(numbers));
//         myfile1.close();
//     } 
//     int arr[n];
//     ifstream file("numbers.dat", ios::in | ios::binary);
//     file.read((char*)&arr, sizeof (arr));
//     for (int i = 0; i < n; i++)
//         cout << arr[i] << " ";
//     file.close();
//     return 0;
// }


//----------------------------------------------------------------------------------------------------------------


// #include <iostream>
// #include <fstream>
// using namespace std;

// struct Product {
//     string name;
//     float price;
// };

// int main() {
//     Product product;
//     product.name = "Apple";
//     product.price = 1.99;
//     ofstream outfile("product.txt");
//     outfile << "Name: " << product.name << endl;
//     outfile << "Price: " << product.price;
//     outfile.close();
//     return 0;
// }

//----------------------------------------------------------------------------------------------------------------