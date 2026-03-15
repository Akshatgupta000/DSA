// for the outer loop count the no. of lines
// for the inner loop focus on the column and connect them somewhow to the rows.
// print the pattern inside the inner for loop
// observe the symmetry optional

#include<iostream>
using namespace std;

// print
// ****
// ****
// ****
// ****
void print1(int n){

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<"* ";
        }
        cout<<endl;
    }
}
// ________________________________________________

// print
// *
// * *
// * * *
// * * * *
// * * * * *

void print2(int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            cout<<"* ";
        }
        cout<<endl;
    }
}
// _________________________________________________


// print
// 1
// 1 2
// 1 2 3
// 1 2 3 4
// 1 2 3 4 5

void print3(int n){
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<j<<" ";
        }
        cout<<endl;
    }
}
// ______________________________________________________

// print
// 1
// 22
// 333
// 4444
// 55555

void print4(int n){
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<i;
        }
        cout<<endl;
    }
}

int main(){
    int n;
    cin>>n;
    // print1(n);
    // print2(n);
    // print3(n);
    print4(n);
    return 0;
}
