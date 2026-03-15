int main(){
    int n;
    cout<<"enter size: ";
    cin>>n;

    int arr[n];
    cout<<"Enter the elements: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int x=arr[0];
    for(int i=1;i<n;i++){
        if(arr[i]>x){
            x=arr[i];
        }
    }
    cout<<"x element is: "<<x;
}