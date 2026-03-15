#include<iostream>
#include<string>
#include<algorithm>
#include<cstring>
#include<sstream>
using namespace std;

int main(){
    // string str="college";
    // string str1("wallah");
    // cout<<str<<" "<<str1<<endl;

    // string str;
    // cin>>str;
    // getline(cin,str);
    // cout<<str<<endl;

// _____________________________________________________________

    // ASCII VALUES->
    // char ch='A';
    // cout<<int(ch)<<endl;

// _____________________________________________________________

    // HOW TO REVERSE A STRING?
    // TIME COMPLEXITY-> O(length of string)
    // string str="hello";
    // reverse(str.begin(),str.end());
    // cout<<str<<endl;

// ______________________________________________________________

// HOW TO REVERSE THE WORDS IN A STRING     -> this method will not ignore extra spaces.
    string str = "HELLO MY NAME IS AKSHAT";
    reverse(str.begin(),str.end());

    // add a space to handle last word.
    str = str + ' ';

    int start=0;
    for(int i=0;i<str.length();i++){
        if(str[i]==' '){
            reverse(str.begin()+start,str.begin()+i);
            start = i+1;
        }
    }
    str.pop_back();
    cout<<str;

// ______________________________________________________________

    // string s = "Hello MY Name is Akshat";
    // stringstream ss(s);
    // string word;
    // string result;

    // while(ss >> word){

    // }

// ______________________________________________________________

    // substring
    // TIME COMPLEXITY-> O(length).
    // string str="survive";
    // cout<<str.substr(0,3)<<endl;

    // ***FOR STRINGS***
    // string s1="college";
    // string s2="wallah";
    // cout<<s1+s2<<endl;


    // ***FOR CHAR***
    // char s1[20]="college";
    // char s2[20]="wallah";

    // strcat(s1,s2);
    // cout<<s1<<endl;
    
// ______________________________________________________________

    // PUSH_BACK
    // string s1="abcd";
    // char ch='e';

    // s1.push_back(ch);
    // cout<<s1<<endl;

// _______________________________________________________________

    // size function
    // string s1="abcde";
    // cout<<s1.size()<<endl;

    // char ch[20]="abcde";
    // cout<<strlen(ch)<<endl;

// ________________________________________________________________

// to_string()-->>to convert numeric value to string

    // int num=432;
    // string str=to_string(num);
    // str += "1";
    // cout<<str<<endl;
    
    // return 0;

// ______________________________________________________________

    //                             STRING VS CHARACTER ARRAY.       
    // *STRING is a class.                                     *array of char data type
    // string variables->objects of this class
    // *string str_name;                                       *char array_name[size];
    // *dynamic memory allocation                              *static memory allocation
    // *NO pre allocated memory                                *unused allocated memory is wasted
    // *have inbuilt functions                                 *faster 
}
