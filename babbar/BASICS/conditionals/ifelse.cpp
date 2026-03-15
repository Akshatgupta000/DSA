#include<iostream>
using namespace std;

// // int main(){
//     int n;
//     cin>>n;
//     if(n%2==0){
//         cout<<"even"<<endl;
//     }else{
//         cout<<"odd";
//     }
//     return 0;
// }

// int main(){
//     int n;
//     cin>>n;
//     if(n%5==0){
//         cout<<"true"<<endl;
//     }else{
//         cout<<"false";
//     }
// }

// TAKE INTEGER INPUT AND PRINT THE ABSOLUTE VALUE OF THAT INTEGER
// int main(){
//     int n;
//     cin>>n;
//     if(n>=0){
//         cout<<n<<endl;
//     }else{
//         cout<<n*-1;
//     }
// }

// PROFIT LOSS
// int main(){
//     int cp;
//     cin>>cp;
//     int sp;
//     cin>>sp;
//     if(cp>sp){
//         cout<<"LOSS"<<cp-sp;
//     }else if(cp==sp){
//         cout<<"no profit no loss";
//     }
//     else{
//         cout<<"Profit"<<sp-cp;
//     }
// }


// TAKE LENGTH AND BREADTH AND PRINT WHETHER AREA IS GREATER OR PERIMETER
// int main(){
//     int l;
//     cin>>l;
//     int b;
//     cin>>b;
//     int area=l*b;
//     int perimeter=2*(l+b);
//     cout<<"area:"<<l*b<<endl;
//     cout<<"perimeter:"<<2*(l+b)<<endl;
//     if(area>perimeter){
//         cout<<"area is greater"<<endl;
//     }else{
//         cout<<"perimeter is greater";
//     }
// }

// TAKE POSITIVE INTEGER INPUT AND TELL IF IT IS A THREE DIGIT NUMBER OR NOT
// int main(){
//     int a;
//     cin>>a;
//     if(a>=100 and a<1000){
//         cout<<"Three digit no.";
//     }else{
//         cout<<"not a three digit number";
//     }
// }

// TAKE POSITIVE INTEGER INPUT AND TELL IF IT IS DIVISIBLE BY 5 AND 3
//     int main(){
//         int n;
//         cin>>n;
//         if(n%3==0 and n%5==0){
//             cout<<"divisible by 5 and 3";
//         }else{
//             cout<<"not divisible";
//         }
// }

// TAKE 3 NUMBER INPUT AND TELL IF THEY CAN BE THE SIDES OF A TRIANGLE
// int main(){
//     int a,b,c;
//     cout<<"Enter sides of triangle:";
//     cin>>a,b,c;

//     if(a>b+c and b>a+c and c>a+b){
//         cout<<"it is a triangle";
//     }else{
//         cout<<"it can not be a triangle";
//     }
// }

// GREATEST OF THREE
// int main(){
//     int a,b,c;
//     cout<<"Enter 1st";
//     cin>>a;
//     cout<<"Enter 2nd";
//     cin>>b;
//     cout<<"Enter 3rd";
//     cin>>c;

//     if(a>b and a>c){
//         cout<<a;
//     }else if(b>a and b>c){
//         cout<<b;
//     }else{
//         cout<<c;
//     }
// }

// TAKE INPUT AND PRINT IN WHICH QUADRANT IT LIES
// int main(){
//     int x;
//     cout<<"enter x:";
//     cin>>x;
//     int y;
//     cout<<"enter y:";
//     cin>>y;
//     if(x>0 and y>0){
//         cout<<"first Quad";
//     }else if(x<0 and y>=0){
//         cout<<"second quad";
//     }else if(x<0 and y<0){
//         cout<<"Third";
//     }
//     else if(x==0 and y==0){
//         cout<<"orign";
//     }else{
//         cout<<"fourth";

//  Write a program to accept the cost price of a bike and display road tax
    // int main(){
    //     int cp;
    //     cout<<"Enter cp:";
    //     cin>>cp;
    //     if(cp>100000){
    //         cout<<"15% Tax";
    //     }else if(cp>50000 and cp<=100000){
    //         cout<<"10% Tax";
    //     }else{
    //         cout<<"5% Tax";
    //     }
    // }

// algorithm to check leap year
    int main(){
        int n;
        cout<<"Enter year";
        cin>>n;

        if(n%400==0){
            cout<<"leap year";
        }else if(n%100==0){
            cout<<"not a leap year";
        }else if(n%4==0){
            cout<<"leap year";
        }else{
            cout<<"not a leap year";
        }
    }
// }
// }