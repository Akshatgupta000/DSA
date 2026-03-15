#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> arr;
    int n;

    cout << "Enter number of elements: ";
    cin >> n;

    cout << "Enter " << n << " elements:\n";
    for (int i = 0; i < n; i++) {
        int val;
        cin >> val;
        arr.push_back(val);
    }

    int value, index;
    cout << "Enter value to insert: ";
    cin >> value;
    cout << "Enter index to insert at (0 to " << arr.size() << "): ";
    cin >> index;

    if (index >= 0 && index <= arr.size()) {
        arr.insert(arr.begin() + index, value);
    } else {
        cout << "Invalid index!\n";
        return 1;
    }

    cout << "Vector after insertion: ";
    for (int val : arr) {
        cout << val << " ";
    }
    cout << endl;

    return 0;
}
