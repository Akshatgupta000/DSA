// You are using GCC
#include<stdio.h>
#include<stdlib.h>
#include<cmath>
#include<iostream>

using namespace std;

// int factorial(int num){
//     if(num==0 || num==1){
//         return 1;
//     }
//     return num*factorial(num-1);
// }

// void printing(int num){
//     if(num==0){
//         return;
//     }
//     printf("%d ",num);
//     printing(num-1);
//     printf("%d ",num);

// }

// int power(int num1,int num2){
//     if(num1==0){
//         return 1;
//     }
//     return num2*power(num1-1,num2);
// }

// int fibonacci(int num){
//     if(num==0){
//         return 0;
//     }
//     else if(num==1 or num==2){
//         return 1;
//     }
//     return fibonacci(num-1)+fibonacci(num-2);
// }

// TOWER OF HANOI
// void towerOfHanoi(int n,char s,char d, char a){
// if(n==1){
//     printf("move ring from source to destination\n");
//     return;
// }
// towerOfHanoi(n-1,s,a,d);
// printf("Move ring %d ",n," from %c",s," to %c\n",d);

// towerOfHanoi(n-1,a,d,s);

// }


// Binary representation of a number

// int deciToBin(int n){
//     if(n==0){
//         return 0;
//     }
//     else{
//         return (n%2) + 10 * deciToBin(n/2);
//     }
// }

// int sum(int n){
//     if(n==0){
//         return 0;
//     }
//     return (n%10 + sum(n/10));
// }
// int main(){
//     int num;
//     scanf("%d",&num);
    
    // int num2;
    // scanf("%d",&num2);

    // int result = factorial(num);
    // printf("the result is %d ",result);

    // printf("%d",fibonacci(num));

    // towerOfHanoi(num,'a','b','c');

    // if (num == 0) {
    //     printf("The binary equivalent of %d is: 0\n", num);
    // } else {
    //     printf("The binary equivalent of %d is: %d\n", num, deciToBin(num));
    // }

//     int ans = sum(num);
//     printf("Sum: %d",ans);

// }

// ___________________________________________________________________

// int main(){
    // Min moves required (tower of Hanoi);
//     int n;
//     cin>>n;
    
//     if(n<=0 || n>8){
//         return 1;
//     }
    
//     int minMoves = pow(2,n)-1;
//     cout<<minMoves;
    
//     return 0;
// }

// _________________________________________________________


// sum if series 1^3 + 2^3 + 3^3 +........................

int main(){
    int n;
    cin>>n;

    int sumOfSeries = (n*(n+1)/2);
    sumOfSeries = sumOfSeries*sumOfSeries;

    cout<<sumOfSeries;
}