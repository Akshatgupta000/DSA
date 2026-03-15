#include<stdio.h>
#include<limits.h>

// taking input in a 2D array.
// int main(){
//     printf("enter a and b: ");
//     int a,b;
//     scanf("%d%d",&a,&b);

//     printf("enter arr elements: ");
//     int arr[a][b];

//     for(int i=0;i<a;i++){
//         for(int j=0;j<b;j++){
//             scanf("%d",&arr[i][j]);
//         }
//     }

//     for(int i=0;i<a;i++){
//         for(int j=0;j<b;j++){
//             printf("%d ",arr[i][j]);
//         }
//         printf("\n");
//     }

// }

// _____________________________________________

// sum of 2 matrix elements.
// int main(){
//     int arr[2][2]={1,2,3,4};
//     int brr[2][2]={5,6,7,8};

//     // int result[2][2];
//     for(int i=0;i<2;i++){
//         for(int j=0;j<2;j++){
//             // result[i][j]=arr[i][j]+brr[i][j];
//             arr[i][j]=arr[i][j]+brr[i][j];
//         }
//     }

//      for(int i=0;i<2;i++){
//         for(int j=0;j<2;j++){
//             // printf("%d ",result[i][j]);
//             printf("%d ",arr[i][j]);
//         }
//     }


// }
// _______________________________________________________


// sum of n*m matrix.
// int main(){
//     printf("Enter no. of rows and columns: ");
//     int n,m;
//     scanf("%d%d",&n,&m);

//     printf("Enter the elements: ");
//     int arr[n][m];
//     for(int i=0;i<n;i++){
//         for(int j=0;j<m;j++){
//             scanf("%d",&arr[i][j]);
//         }
//     }

//     int sum=0;
//     for(int i=0;i<n;i++){
//         for(int j=0;j<m;j++){
//             // printf("%d ",arr[i][j]);
//             sum+=arr[i][j];
//         }
//     }
//     printf("The sum of matrix is %d ",sum);

// }
// ____________________________________________________

// FIND OUT THE MAXIMUM ELEMENT IN A 2D ARRAY.
// int main(){
//     printf("Enter no. of rows and columns: ");
//     int n,m;
//     scanf("%d%d",&n,&m);

//     printf("Enter the elements: ");
//     int arr[n][m];
//     for(int i=0;i<n;i++){
//         for(int j=0;j<m;j++){
//             scanf("%d",&arr[i][j]);
//         }
//     }

//     int max=INT_MIN;
    
//      for(int i=0;i<n;i++){
//         for(int j=0;j<m;j++){
//             if(arr[i][j]>max){
//                 max=arr[i][j];
//             }
//         }
//     }
//     printf("Max element is: %d ",max);

// }

int main(){
    int n,m;
    scanf("%d%d",&n,&m);

    int arr[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    int sum=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            sum+=arr[i][j];
        }
    }
    
}