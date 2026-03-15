#include <iostream>
#include <queue> // Include the queue header

using namespace std;

void displayQueue(queue<int> q){
    if(q.empty()){
        cout<<"queue is empty.";
        return;
    }
    while(!q.empty()){
        cout<<q.front()<<" ";
        q.pop();
    }
    cout<<"\n";;
}

int main() {
    queue<int> q; // Create a queue of integers
    int choice, value;

    do {
        cout << "\nMenu:\n";
        cout << "1. Enqueue\n";
        cout << "2. Dequeue\n";
        cout << "3. Display Queue\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter an integer to enqueue: ";
                cin >> value;
                q.push(value); // Enqueue the user input
                cout << value << " enqueued." << endl;
                break;

            case 2:
                if (!q.empty()) {
                    cout << q.front() << " dequeued." << endl; // Display front before dequeuing
                    q.pop(); // Dequeue the front element
                } else {
                    cout << "Queue is empty! Cannot dequeue." << endl;
                }
                break;

            case 3:
                // if (!q.empty()) {
                //     cout << "Current queue elements: ";
                //     queue<int> tempQueue = q; // Create a temporary copy to display
                //     while (!tempQueue.empty()) {
                //         cout << tempQueue.front() << " "; // Display front element
                //         tempQueue.pop(); // Remove from temporary queue
                //     }
                //     cout << endl;
                // } else {
                //     cout << "Queue is empty!" << endl;
                // }
                displayQueue(q);
                break;

            case 4:
                cout << "Exiting..." << endl;
                break;

            default:
                cout << "Invalid choice! Please try again." << endl;
        }
    }  while (choice != 4);

    return 0; // Indicate successful execution
}