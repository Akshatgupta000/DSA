#include<iostream>
using namespace std;

void reverse(char str[],int n){
    int s=0;
    int e=n-1;

    while(s<e){
        swap(str[s++],str[e--]);
    }

}

int getLength(char str[]){
    int count=0;
    for(int i=0;i<str[i]!='\0';i++){
        count++;
    }
    return count;
}

int main(){
    cout<<"Enter your Name: ";
    char str[10];
    cin>>str;

    cout<<"Name is: ";
    cout<<str<<endl;

    int length=getLength(str);
    cout<<"Length is: "<<length<<endl;;

    reverse(str,length);
    cout<<"Reversed name is: "<<str<<endl;
    
    return 0;
}