// #include <iostream>
// #include <vector>
// #include <stack>
// using namespace std;

// vector<int> nextGreaterElement(vector<int> &nums)
// {
//     int n = nums.size(); // define the size
//     vector<int> nge(n, -1);     //create an array nge of n size 

//     stack<int> st; // create a stack
//     for (int i = n - 1; i >= 0; i--)
//     { // iterate the loop from right to left because we dont know the next elements
//         while (!st.empty() && st.top() <= nums[i])
//         { // while stack is not empty and top<=num[i] run while loop and pop the elements
//             st.pop();
//         }
//         if (!st.empty())
//         {
//             nge[i] = st.top();
//         }
//         st.push(nums[i]);
//     }
//     return nge;
// }

// int main()
// {
//     vector<int> nums = {4, 1, 2};
//     vector<int> nge = nextGreaterElement(nums);
//     for (int i = 0; i < nums.size(); i++)
//     {
//         cout << nums[i] << "-> " << nge[i] << endl;
//     }
//     return 0;
// }

// _______________________________________________________________________________

