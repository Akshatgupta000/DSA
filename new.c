// #include<stdio.h>
// int main(){
//     printf("Enter size :");
//     int n;
//     scanf("%d",&n);

//     printf("Enter all elements: ");
//     int arr[n];
//     for(int i=0;i<n;i++){
//         scanf("%d",&arr[i]);
//     }

    
//     printf("Enter index: ");
//     int index;
//     scanf("%d",&index);

//     // printf("Enter element: ");
//     // int element;
//     // scanf("%d",&element);

//     // for(int i=n-1;i>=index;i--){
//     //     arr[i+1]=arr[i];

//     // }
//     // n=n+1;
//     // arr[index]=element;

//     for(int i=index;i<n-1;i++){
//         arr[i]=arr[i+1];
//     }
//     n=n-1;
    

//     for(int i=0;i<n;i++){
//         printf("%d ",arr[i]);
//     }
// }


// int main(){
//     int n;
//     scanf("%d",&n);

//     int arr[n];
//     for(int i=0;i<n;i++){
//         scanf("%d",&arr[i]);
//     }

//     for(int i=0;i<n;i++){
//         for(int j=i+1;j<n;j++){
//             if(arr[i]<arr[j]){
//                 int temp=arr[i];
//                 arr[i]=arr[j];
//                 arr[j]=temp;
//             }
//         }
//     }
//     for(int i=0;i<n;i++){
//         printf("%d ",arr[i]);
//     }

// }



// int main(){
//     int n;
//     scanf("%d",&n);

//     int arr[n];
//     for(int i=0;i<n;i++){
//         scanf("%d",&arr[i]);
//     }

//     int index;
//     scanf("%d",&index);

    // int data;
    // scanf("%d",&data);

    // for(int i=n-1;i>=index;i--){
    //     arr[i+1]=arr[i];
    // }
    // n=n+1;
    // arr[index]=data;

//     for(int i=index;i<=n-1;i++){
//         arr[i]=arr[i+1];
//     }
//     n=n-1;

//     for(int i=0;i<n;i++){
//         printf("%d ",arr[i]);
//     }
    
// }

#include <stdio.h>
#include <string.h>
#include <ctype.h> // For tolower()

int main() {
    char firstName[50], middleName[50], lastName[50];
    char abbreviation[10]; // Assuming maximum initials won't exceed 3

    printf("Welcome to the Name Abbreviation Generator!\n");

    // Get user input for names
    printf("Enter your first name: ");
    fgets(firstName, sizeof(firstName), stdin);
    firstName[strcspn(firstName, "\n")] = '\0'; // Remove trailing newline

    printf("Enter your middle name (optional, press Enter if none): ");
    fgets(middleName, sizeof(middleName), stdin);
    middleName[strcspn(middleName, "\n")] = '\0'; // Remove trailing newline

    printf("Enter your last name: ");
    fgets(lastName, sizeof(lastName), stdin);
    lastName[strcspn(lastName, "\n")] = '\0'; // Remove trailing newline

    // Construct the abbreviation
    abbreviation[0] = tolower(firstName[0]); // Ensure lowercase for case-insensitive order
    int abbreviationIndex = 1;

    // Check if middle name exists and add its first letter (lowercase)
    if (strlen(middleName) > 0) {
        abbreviation[abbreviationIndex] = tolower(middleName[0]);
        abbreviationIndex++;
    }

    // Add the first letter of the last name (lowercase)
    abbreviation[abbreviationIndex] = tolower(lastName[0]);
    abbreviation[abbreviationIndex + 1] = '\0'; // Terminate the string

    // Print the abbreviation
    printf("Your alphabetical abbreviation is: %s\n", abbreviation);

    return 0;
}
