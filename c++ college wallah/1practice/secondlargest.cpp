#include<iostream>
using namespace std;

int largestElementIndex(int array[],int size){
    int max=INT16_MIN;
    int maxindex=-1;
    for(int i=0;i<size;i++){
        if(array[i]>max){
        max=array[i];
        maxindex=i;
    }
} return maxindex;
}

int main(){
    int array[]={2,3,4,6,8,7};
    int index=largestElementIndex(array,6);
    cout<<array[index]<<endl;
    array[index]=-1;

    int indexofsecondlargest = largestElementIndex(array,6);
    cout<<array[indexofsecondlargest]<<endl;
    
    return 0;
}