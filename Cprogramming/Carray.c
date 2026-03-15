#include<stdio.h>
#include<limits.h>

// inserting an element in an array.
// int main(){
//     int arr[10],index,data,i,n;
//     printf("how many elements ");
//     scanf("%d",&n);

//     printf("enter the elements: ");
//     for(int i=0;i<n;i++){
//         scanf("%d",&arr[i]);
//     }

//     printf("Enter the index you want to store ");
//     scanf("%d",&index);

//     printf("Enter the data ");
//     scanf("%d",&data);

//     for(int i=n-1;i>=index;i--){
//         arr[i+1]=arr[i];
//     }
//     n=n+1;
//     arr[index]=data;
//     printf("after insertion ");
//     for(int i=0;i<n;i++){
//         printf("%d ",arr[i]);
//     }

    
// }


// _______________________________________________________
// deleting an element in an array

// int main(){
//     int arr[10],index,data,i,n;
//     printf("how many elements ");
//     scanf("%d",&n);

//     printf("enter the elements: ");
//     for(int i=0;i<n;i++){
//         scanf("%d",&arr[i]);
//     }

//     printf("Enter the index you want to delete ");
//     scanf("%d",&index);

//     for(int i=index;i<n-1;i++){
//         arr[i]=arr[i+1];
//     }
//     n=n-1;
//     printf("after deletion: ");

//     for(int i=0;i<n;i++){
//         printf("%d ",arr[i]);
//     }
// }

// _______________________________________________________

// print sum and product of all elements of an array.
// int main(){
//     printf("Enter size: ");
//     int n;
//     scanf("%d",&n);

//     printf("Enter elements: ");
//     int arr[n];
//     for(int i=0;i<n;i++){
//         scanf("%d",&arr[i]);
//     }
//     // int sum=0;
//     int product=1;
//     for(int i=0;i<n;i++){
//     //    sum=sum+arr[i];
//     product*=arr[i];
//     }
//     printf("%d",product);
// }

// _______________________________________________________


// finding max and min element in an array.
// int main(){
//     int n;
//     scanf("%d",&n);

//     int arr[n];
//     for(int i=0;i<n;i++){
//         scanf("%d",&arr[i]);
//     }

//     // int max=arr[0];
//     int min=arr[0];
//     for(int i=1;i<n;i++){
//         // if(arr[i]>max){
//         //     max=arr[i];
//         // }

//         if(arr[i]<min){
//             min=arr[i];
//         }
//     }
//     // printf("%d",max);
//     printf("%d",min);
// }

// _______________________________________________________


// Odd even increment multiple.
// int main(){
//     printf("Enter size: ");
//     int n;
//     scanf("%d",&n);

//     printf("Enter elements: ");
//     int arr[n];
//     for(int i=0;i<n;i++){
//         scanf("%d",&arr[i]);
//     }

//     for(int i=0;i<n;i++){
//         if(i%2!=0){
//            arr[i]=arr[i]*2;
//         }
//         else{
//             arr[i]=arr[i]+10;
//         }
//         printf("%d ",arr[i]);

//     }
// }

// _____________________________________________________


// count the number of elements greater than x.
// int main(){
//     printf("Enter size: ");
//     int n;
//     scanf("%d",&n);

//     printf("Enter elements: ");
//     int arr[n];
//     for(int i=0;i<n;i++){
//         scanf("%d",&arr[i]);
//     }

//     printf("enter x: ");
//     int x;
//     scanf("%d",&x);

//     int count=0;

//     for(int i=0;i<n;i++){
//         if(arr[i]>x){
//             count++;
//         }
//     }
//     printf("%d",count);
// }

// _______________________________________________________

// print difference b/w odd indexed and even indexed element.
// int main(){
//     printf("Enter size: ");
//     int n;
//     scanf("%d",&n);

//     printf("Enter elements: ");
//     int arr[n];
//     for(int i=0;i<n;i++){
//         scanf("%d",&arr[i]);
//     }

//     int evenSum=0;
//     int oddSum=0;
//     for(int i=0;i<n;i++){
//         if(i%2==0){
//             evenSum+=arr[i];
            
//         }
//         else{
//             oddSum+=arr[i];
//         }
//     }
//     printf("%d",evenSum-oddSum);
// }

// _____________________________________________________

// count no. of pairs whose sum is equal to given value x.
// int main(){
//     printf("Enter size: ");
//     int n;
//     scanf("%d",&n);

//     printf("Enter elements: ");
//     int arr[n];
//     for(int i=0;i<n;i++){
//         scanf("%d",&arr[i]);
//     }
//     printf("enter x: ");
//     int x;
//     scanf("%d",&x);
    
//     int count=0;

//     for(int i=0;i<n;i++){
//         for(int j=i+1;j<n;j++){
//             if(arr[i]+arr[j]==x){
//                 count++;
//             }
//         }
//     }
//     printf("%d",count);
// }
// ______________________________________________________

// find total no. of pairs whose sum is equal to given value x.
// int main(){
//     printf("Enter size: ");
//     int n;
//     scanf("%d",&n);

//     printf("Enter elements: ");
//     int arr[n];
//     for(int i=0;i<n;i++){
//         scanf("%d",&arr[i]);
//     }
//      printf("enter x: ");
//     int x;
//     scanf("%d",&x);

//     int count=0;
//     for(int i=0;i<=n;i++){
//         for(int j=i+1;j<=n;j++){
//             for(int k=j+1;k<=n;k++){
//                 if(arr[i]+arr[j]+arr[k]==x){
//                     count++;
//                 }
//             }
//         }
//     }
//     printf("%d",count);
// }
// _____________________________________________________

// print second max element in an array.
// int main(){
//     printf("Enter size: ");
//     int n;
//     scanf("%d",&n);

//     printf("Enter elements: ");
//     int arr[n];
//     for(int i=0;i<n;i++){
//         scanf("%d",&arr[i]);
//     }
//     int max=arr[0];

//     for(int i=0;i<n;i++){
//         if(arr[i]>max){
//             max=arr[i];
//         }
//     }

//     // int max2=INT_MIN;
//     int max2=arr[0];
//     for(int i=0;i<n;i++){
//         if(arr[i]>max2 && arr[i]!=max){
//             max2=arr[i];
//         }
//     }
//     printf("%d ",max2);
// }

// _____________________________________________________


// linear search. 
// int main(){
//     printf("Enter size: ");
//     int n;
//     scanf("%d",&n);

//     printf("Enter elements: ");
//     int arr[n];
//     for(int i=0;i<n;i++){
//         scanf("%d",&arr[i]);
//     }

//     int x;
//     scanf("%d",&x);

//     for(int i=0;i<n;i++){
//         if(arr[i]==x){
//             printf("found %d",i);
//         }
//     }
// }

// ______________________________________________________


// to find sum of those elements which are multiple of 5.
// int main(){
//     printf("Enter size: ");
//     int n;
//     scanf("%d",&n);

//     printf("Enter elements: ");
//     int arr[n];
//     for(int i=0;i<n;i++){
//         scanf("%d",&arr[i]);
//     }

//     int sum=0;
//     for(int i=0;i<n;i++){
//         if(arr[i]%5==0){
//             sum+=arr[i];
//         }
//     }
//     printf("%d ",sum);
// }

// ________________________________________________________
// int main()
// {
//     int i, j, end, isPrime, sum=0;

//     /* Input upper limit from user */
//     printf("Find sum of all prime between 1 to : ");
//     scanf("%d", &end);

//     /* Find all prime numbers between 1 to end */
//     for(i=2; i<=end; i++)
//     {

//         /* Check if the current number i is Prime or not */
//         isPrime = 1;
//         for(j=2; j<=i/2 ;j++)
//         {
//             if(i%j==0)
//             {
//                 /* 'i' is not prime */
//                 isPrime = 0;
//                 break;
//             }
//         }

//         /*
//          * If 'i' is Prime then add to sum
//          */
//         if(isPrime==1)
//         {
//             sum += i;
//         }
//     }

//     printf("Sum of all prime numbers between 1 to %d = %d", end, sum);

//     return 0;
// }

// ____________________________________________________________

// count positive, negative and zeros in an array.
// int main(){
//     int n;
//     scanf("%d",&n);

//     int arr[n];
//     for(int i=0;i<n;i++){
//         scanf("%d",&arr[i]);
//     }

//     int countPositive=0;
//     int countNegative=0;
//     int countZero=0;

//     for(int i=0;i<n;i++){
//         if(arr[i]==0){
//             countZero++;
//         }
//         else if(arr[i]<0){
//             countNegative++;
//         }
//         else if(arr[i]>0){
//             countPositive++;
//         }
//     }

//     printf("Zeros: %d\n",countZero);
//     printf("Negative: %d\n",countNegative);
//     printf("Positive: %d",countPositive);
// }

// ______________________________________________________

// Let's consider the smallest perfect number, 6.

// Divisors of 6: 1, 2, 3, 6
// Proper divisors (excluding 6): 1, 2, 3
// Sum of proper divisors: 1 + 2 + 3 = 6

// int main(){
//     int n;
//     scanf("%d",&n);

//     int sum=0;
//     for(int i=1;i<=n/2;i++){
//         if(n%i==0){
//             sum=sum+i;
//         }
//     }
//     if(sum==n){
//         printf("Perfect number");
//     }
//     else{
//         printf("Not a perfect number");
//     }
// }

// _____________________________________________________

// reverse digits of a number
