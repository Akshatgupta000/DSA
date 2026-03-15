#include<bits/stdc++.h>
using namespace std;
void mymain(){
    cout<<"HI";
    exit(0);
}
class newmain{
    public:
    newmain(){
        mymain();
    }
};
newmain nm1;

int square(int number) {
    return number;
}

// Main function
int main() {
    int num = 5; // Initialize a variable
    int result = square(num); // Call the square function
    std::cout << "The square of " << num << " is " << result << std::endl; // Output the result
    return 0; // Indicate successful completion
}