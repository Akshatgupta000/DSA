#include <iostream>
#include <vector>
#include <algorithm>
#include <set>
using namespace std;

// Taking input in an array

// int main(){
//     int n;
//     cout<<"Enter array size ";
//     cin>>n;

//     int arr[n];
//     cout<<"Enter the elements"<<endl;
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     for(int i=0;i<n;i++){
//         cout<<arr[i]<<" ";
//     }
// }
// __________________________________________________________________

// finding length of an array and printing the array
// int main(){
//     int arr[]={12,2,4,56,7,5};
//     int n=sizeof(arr)/sizeof(arr[0]);
//     cout<<n<<endl;
//     for(int i=0;i<n;i++){
//         cout<<arr[i]<<" ";
//     }
// }
// ____________________________________________________

// calculate sum,avg,product of all elements in an array
// int main(){
//     int n;
//     cout<<"Enter size : ";
//     cin>>n;

//     int arr[n];
//     int sum=0;
//     int product=1;

//     cout<<"Enter the elements: ";
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//         sum+=arr[i];
//         product*=arr[i];
//     }
//     cout<<"sum= "<<sum<<endl;
//     cout<<"avg= "<<sum/n<<endl;
//     cout<<"product= "<<product;
// }
// _________________________________________________

// finding an element
// int main(){
//    int n;
//    cout<<"Enter size of array: ";
//    cin>>n;

//    int x;
//    int i;

//     int arr[n];
//     cout<<"Enter the elements: ";
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }

//     cout<<"Enter key: ";
//     cin>>x;

//     bool flag=false;
//     for(int i=0;i<n;i++){
//         if(arr[i]==x){
//             cout<<"Element found at index "<<i<<endl;
//             break;
//         }
//         else{
//             cout<<"Not found"<<endl;
//         }
//     }
// }
// _________________________________________________

// // finding x element
// int main(){
//     int n;
//     cout<<"enter size: ";
//     cin>>n;

//     int arr[n];
//     cout<<"Enter the elements: ";
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     int x=arr[0];
//     for(int i=1;i<n;i++){
//         if(arr[i]>x){
//             x=arr[i];
//         }
//     }
//     cout<<"x element is: "<<x;
// }

// int main(){
//     int n;
//     cout<<"Enter size: ";
//     cin>>n;

//     int arr[n];
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     int key;
//     cout<<"Enter key: ";
//     cin>>key;

//     int ans=-1;
//     for(int i=0;i<n;i++){
//         if(arr[i]==key){
//             ans=i;
//         }
//     }
//     cout<<ans;
// }
// _________________________________________________

// finding min element in an array
// int main(){
//     int n;
//     cout<<"enter size: ";
//     cin>>n;

//     int arr[n];
//     cout<<"Enter the elements: ";
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     int min=arr[0];
//     for(int i=0;i<n;i++){
//         if(arr[i]<min){
//            min=arr[i];
//         }
//     }
//      cout<<"Min element is: "<<min;
// }
// _________________________________________________

// find second largest element
// int main(){
//     int n;
//     cin>>n;

//     int arr[n];
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     int x=INT16_MIN;
//     for(int i=0;i<n;i++){
//         if(arr[i]>x){
//             x=arr[i];
//         }
//     }
//     cout<<"largest: "<<x<<endl;

//     int second_x=INT16_MIN;
//     for(int i=0;i<n;i++){
//         if(arr[i]>second_x && arr[i]!=x){
//             second_x=arr[i];
//         }
//     }
//     cout<<"Second largest: "<<second_x;
// }
// _________________________________________________

// __________________________________________________

// inserting an element at desired index.
//  int main(){
//    int n;
//    cin>>n;

//    int arr[n];
//    for(int i=0;i<n;i++){
//     cin>>arr[i];
//    }

//     int index,value;
//     cin>>index;
//     cin>>value;

//     for(int i=n;i>index;i--){
//         arr[i] = arr[i-1];  //shift element right
//     }
//     arr[index] = value;
//      n=n+1;

//     for(int i=0;i<n;i++){
//         cout<<arr[i]<<" ";
//     }
//  }

// _______________________________________________________________

// inserting an element at the head of an array.
// int main(){
//     int n;
//     cin>>n;

//     int arr[n];
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }

//     int value;
//     cin>>value;
//     for(int i=n;i>0;i--){
//         arr[i]=arr[i-1];     //i pe i-1 wala element bhej denge
//     }
//     arr[0]= value;
//     n=n+1;

//     for(int i=0;i<n;i++){
//         cout<<arr[i]<<" ";
//     }
// }

// ____________________________________________________________

// inserting an element at the end of an array.
// int main(){
//     int n;
//     cin>>n;

//     int arr[n];
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }

//     int value;
//     cin>>value;

//     arr[n]= value;
//     n=n+1;

//     for(int i=0;i<n;i++){
//         cout<<arr[i]<<" ";
//     }
// }

// __________________________________________________________________

// deleting an element from desired index in an array.
// int main(){
//     int n;
//     cin>>n;

//     int arr[n];
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }

//     int index;
//     cin>>index;

//     for(int i=index;i<n;i++){
//         arr[i]=arr[i+1];
//     }
//     n--;

//     for(int i=0;i<n;i++){
//         cout<<arr[i]<<" ";
//     }

// }

// ________________________________________________________

// deleting a particular element from an array.
// int main(){
//     int n;
//     cin>>n;

//     int arr[n];
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     int val;
//     cin>>val;

//     int index = -1;
//     for(int i=0;i<n;i++){
//         if(arr[i]==val){
//             index = i;
//             break;
//         }
//     }

//     if(index!=-1){
//         for(int i=index;i<n;i++){
//             arr[i]=arr[i+1];
//         }
//         n--;
//     }

//     for(int i=0;i<n;i++){
//         cout<<arr[i]<<" ";
//     }
// }
// ________________________________________________________________________________

// Rotating an array by k Steps

// void rotateArray(int arr[],int n,int k){
//     k = k%n;
//     int temp[n];

//     // copy elements at the new position.
//     for(int i=0;i<n;i++){
//         temp[(i+k)%n] = arr[i];
//     }

//     for(int i=0;i<n;i++){
//         arr[i] = temp[i];
//     }
// }

// int main(){
//     int n;
//     cin>>n;

//     int arr[n];
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }

//     int k;
//     cin>>k;

//     rotateArray(arr,n,k);

//     for(int i=0;i<n;i++){
//         cout<<arr[i]<<" ";
//     }

// }
// ___________________________________________________________

// rotate an array by k steps Approach 2

// void rotateArrayK(int arr[], int n, int k)
// {
//     k = k % n;
//     reverse(arr, arr + n);
//     reverse(arr, arr + k);
//     reverse(arr + k, arr + n);
// }

// int main()
// {
//     int n;
//     cin >> n;

//     int arr[n];
//     for (int i = 0; i < n; i++)
//     {
//         cin >> arr[i];
//     }

//     int k;
//     cin >> k;

//     rotateArrayK(arr, n, k);

//     for (int i = 0; i < n; i++)
//     {
//         cout << arr[i] << " ";
//     }
// }
// _________________________________________________________

// move zeros to the end

// vector<int> moveZeros(int n, vector<int> arr){
//     vector<int> temp;

//     for(int i=0;i<n;i++){
//         if(arr[i]!=0){
//             temp.push_back(arr[i]);
//         }
//     }

//     int m = temp.size();

//     for(int i=0;i<m;i++){
//         arr[i] = temp[i];
//     }
//     for(int i=m;i<n;i++){
//         arr[i] = 0;
//     }
//     return arr;
// }

// int main(){
//     int n;
//     cin>>n;

//     vector<int> arr(n);
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }

//     vector<int> ans = moveZeros(n,arr);

// }

// ______________________________________________________________

// move zeros to end(approach 2)

// int main()
// {
//     vector<int> arr{1, 0, 2, 4, 0, 5};
//     int n = arr.size();
//     int index = 0;

//     for (int i = 0; i < n; i++)
//     {
//         if (arr[i] == 0)
//         {
//             arr[index++] = arr[i];
//         }
//     }
//     while (index < n)
//     {
//         arr[index++] = 0;
//     }
// }

// _______________________________________________________________

// check if array is sorted and rotated

// bool checkSortedAndRotated(int arr[], int n){
//     int breaks = 0;
//     for(int i=0;i<n;i++){
//         if(arr[i]>arr[(i+1) % n]){
//             breaks++;
//         }
//     }
//     return breaks<=1;
// }

// int main(){
//     int n;
//     cin>>n;

//     int arr[n];
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }

//     checkSortedAndRotated(arr,n);

//     if(checkSortedAndRotated){
//         cout<<"True";
//     }
//     else{
//         cout<<"False";
//     }
// }
// ______________________________________________________

// remove duplicates from an array(SORTED) using vector
// int main()
// {
//     vector<int> arr{1, 2, 4, 3, 3, 2, 5};
//     sort(arr.begin(), arr.end());
//     auto last = unique(arr.begin(), arr.end());     //here last is an iterator already predefined
//     arr.erase(last, arr.end());

//     for (int x : arr)
//     {
//         cout << x << " ";
//     }
// }

// remove duplicates from an array(UNSORTED also preserving the order) using set
// int main()
// {
//     vector<int> arr{1, 6, 3, 1, 6, 7};
//     set<int> seen;
//     vector<int> ans;
//     // we are using ans because set will sort the data which we dont want

//     for (auto x : arr)
//     {
//         if (seen.find(x) == seen.end())
//         {
//             seen.insert(x);
//             ans.push_back(x);
//         }
//     }
//     for (auto x : ans)
//     {
//         cout << x << " ";
//     }
// }