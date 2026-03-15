// You are working on a program that needs to display decimal numbers with a specific formatting pattern. The pattern includes printing decimal numbers from 0.1 to n with three spaces in between each number.



// Write a program that takes an integer n as input and displays decimal numbers in the format 0.1, 0.2, 0.3, and so on, up to n numbers, with three spaces in between each number.



// Note: Use the manipulator function setw() for the spacings.

#include <iostream>
#include <iomanip>  // For std::setw and std::setprecision

int main() {
    int n;
    std::cout << "Enter the number of decimal numbers to display: ";
    std::cin >> n;

    for (int i = 1; i <= n; i++) {
        // Set precision to display numbers in 0.x format
        std::cout << std::fixed << std::setprecision(1) << "0." << i;

        // Add three spaces between numbers, but not after the last one
        if (i != n) {
            std::cout << "   ";
        }
    }

    std::cout << std::endl;

    return 0;
}

// _________________________________________________________________________________