#include <iostream>
#include <deque> // Include the deque header

using namespace std;

int main() {
    deque<int> myDeque; // Create a deque of integers
    int choice, value;

    do {
        cout << "\nMenu:\n";
        cout << "1. Add to front\n";
        cout << "2. Add to back\n";
        cout << "3. Remove from front\n";
        cout << "4. Remove from back\n";
        cout << "5. Display Deque\n";
        cout << "6. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter an integer to add to front: ";
                cin >> value;
                myDeque.push_front(value); // Add to front
                cout << value << " added to front." << endl;
                break;

            case 2:
                cout << "Enter an integer to add to back: ";
                cin >> value;
                myDeque.push_back(value); // Add to back
                cout << value << " added to back." << endl;
                break;

            case 3:
                if (!myDeque.empty()) {
                    cout << myDeque.front() << " removed from front." << endl; // Display front before removing
                    myDeque.pop_front(); // Remove from front
                } else {
                    cout << "Deque is empty! Cannot remove from front." << endl;
                }
                break;

            case 4:
                if (!myDeque.empty()) {
                    cout << myDeque.back() << " removed from back." << endl; // Display back before removing
                    myDeque.pop_back(); // Remove from back
                } else {
                    cout << "Deque is empty! Cannot remove from back." << endl;
                }
                break;

            case 5:
                if (!myDeque.empty()) {
                    cout << "Current deque elements: ";
                    for (int value : myDeque) {
                        cout << value << " "; // Display all elements
                    }
                    cout << endl;
                } else {
                    cout << "Deque is empty!" << endl;
                }
                break;

            case 6:
                cout << "Exiting..." << endl;
                break;

            default:
                cout << "Invalid choice! Please try again." << endl;
        }
    } while (choice != 6);

    return 0; // Indicate successful execution
}
