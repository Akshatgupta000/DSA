#include <stdio.h>

// int main() {
//     int num, even_sum = 0, odd_sum = 0;

//     printf("Enter an integer: ");
//     scanf("%d", &num);

//     // Handle negative numbers (optional)
//     if (num < 0) {
//         printf("Error: Please enter a non-negative integer.\n");
//         return 1; // Indicate error
//     }

//     // Handle single-digit number (all digits considered)
//     if (num < 10) {
//         printf("Single-digit number: all digits are considered.\n");
//         printf("Sum of even digits: %d\n", even_sum);
//         printf("Sum of odd digits: %d\n", odd_sum);
//         return 0;
//     }

//     // Extract and process digits
//     while (num > 0) {
//         int digit = num % 10; // Extract the last digit

//         if (digit % 2 == 0) {
//             even_sum += digit;
//         } else {
//             odd_sum += digit;
//         }

//         num /= 10; // Remove the last digit for next iteration
//     }

//     // Print results
//     printf("Sum of even digits: %d\n", even_sum);
//     printf("Sum of odd digits: %d\n", odd_sum);

//     return 0;
// }