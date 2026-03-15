#include <iostream>
#include <vector>
using namespace std;

// void print(int n)
// {
//     if (n == 0)
//     {
//         return;
//     }
//     print(n - 1);
//     cout << n << " ";
// }

// int fact(int n)
// {
//     if (n == 0 || n == 1)
//     {
//         return 1;
//     }
//     return n * fact(n - 1);
// }

// int sum(int n)
// {
//     if (n == 0)
//     {
//         return 0;
//     }
//     return n + sum(n - 1);
// }

bool isSorted(vector<int> &arr, int n)
{
    if (n == 0)
    {
        return true;
    }

    if (arr[n - 1] < arr[n - 2])
    {
        return false;
    }
    return isSorted(arr, n - 1);
}

int main()
{

    vector<int> arr = {1, 2, 3, 4, 5};
    int n = arr.size();

    if (isSorted(arr, n))
    {
        cout << "Array is sorted" << endl;
    }
    else
    {
        cout << "Array is not sorted" << endl;
    }
    return 0;
}