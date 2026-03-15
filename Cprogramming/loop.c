#include<stdio.h>

// leap year
// int main(){
//     int n;
//     scanf("%d",&n);

//     if(((n%4==0) && (n%100!=0)) || (n%400==0)){
//         printf("Leap year ");
//     }
//     else{
//         printf("Not a leap year");
//     }
// }
// _______________________________________________________________

// armstrong;-->> 153,370,371,407.
// int main(){
//     printf("Enter number: ");
//     int n;
//     scanf("%d",&n);

//     int num,remainder,result=0;

//     num=n;

//     while(num!=0){
//         remainder=num%10;
//         result+=remainder*remainder*remainder;
//         num=num/10;
//     }
//     if(result=n){
//         printf("Armstrong");
//     }
//     else{
//         printf("Not a Armstrong");
//     }
// }
// _______________________________________________________________________

// reverse a number
// int main(){
//     int n;
//     scanf("%d",&n);

//     int rev=0;
//     while(n!=0){
//         rev=(rev*10)+(n%10);
//         n=n/10;
//     }
//     printf("rev: %d",rev);
// }
// _____________________________________________________

// Palindrome.

// int main(){
//     int n;
//     scanf("%d",&n);

//     int num=n;
//     int rev=0;
//     while(n!=0){
//         rev=(rev*10)+(n%10);
//         n=n/10;
//     }
//     if(rev==num){
//         printf("Palindrome");
//     }
//     else{
//         printf("NO");
//     }
// }
// ______________________________________________________

// factorial

// int main(){
//     int n;
//     scanf("%d",&n);

//     int fact=1;
//     for(int i=1;i<=n;i++){
//         fact=fact*i;
//     }
//     printf("%d",fact);
// }
// _____________________________________________________

// fibonacci

// int main(){
//     int n;
//     scanf("%d",&n);

//     int a=0;
//     int b=1;
//     int c=0;

//     for(int i=1;i<=n;i++){
//         printf("%d ",c);
//         a=b;
//         b=c;
//         c=a+b;
//     }
// }
// _______________________________________________________________

// int main(){
//     int n;
//     scanf("%d",&n);

//     int product=1;
//     int digit;
//     for(int i=0;i<=n;i++){
//         digit=n%10;
//         if(digit%2==0){
//         product*=digit;
//         }
//             n=n/10;
//     }
//     printf("%d",product);
// }

// _______________________________________________________________

