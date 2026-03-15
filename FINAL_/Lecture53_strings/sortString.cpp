// given a string str, sort the given string
// Constraints: the string will contain only alphabetical character from a-z.

// time complexity= O(length of string).
// space complexity= O(26)..constant.
#include<iostream>
#include<string>
#include<vector>
using namespace std;

string countSort(string str){

    vector<int> freq(26,0);

    // adding frequency of every character in string
    for(int i=0;i<str.length();i++){
        int index=str[i]-'a';
        freq[index]++;
    }
    // create out sorted string
    int j=0;
    for(int i=0;i<26;i++){
        while(freq[i]--){
            str[j++] = i + 'a';
        }
    }
    return str;

}

int main(){
    string str;
    cin>>str;

    cout<<countSort(str)<<endl;
    return 0;
}