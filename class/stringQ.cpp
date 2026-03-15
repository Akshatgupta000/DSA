#include <iostream>
#include <string>

using namespace std;

// Node class representing each line in the document
class Node {
public:
    string data;
    Node* next;

    Node(string data) {
        this->data = data;
        this->next = nullptr;
    }
};

// LinkedList class to manage the document
class LinkedList {
private:
    Node* head;

public:
    LinkedList() {
        head = nullptr;
    }

    // Function to insert a line at the beginning
    void insertAtBeginning(string data) {
        Node* newNode = new Node(data);
        newNode->next = head;
        head = newNode;
    }

    // Function to append a line at the end
    void appendAtEnd(string data) {
        Node* newNode = new Node(data);

        if (head == nullptr) {
            head = newNode;
            return;
        }

        Node* temp = head;
        while (temp->next != nullptr) {
            temp = temp->next;
        }
        temp->next = newNode;
    }

    // Function to display the content of the document
    void display() {
        Node* temp = head;
        while (temp != nullptr) {
            cout << temp->data;
            if (temp->next != nullptr) {
                cout << " ";
            }
            temp = temp->next;
        }
    }
};

int main() {
    int n;
    cin >> n;
    cin.ignore(); // To handle the newline after integer input

    LinkedList document;

    // Reading the initial n lines to insert at the beginning
    for (int i = 0; i < n; ++i) {
        string line;
        getline(cin, line);
        document.insertAtBeginning(line);
    }

    // Display the initial document
    cout << "Document: ";
    document.display();
    cout << endl;

    // Reading the additional line to append at the end
    string additionalLine;
    getline(cin, additionalLine);
    document.appendAtEnd(additionalLine);

    // Display the updated document
    cout << "Updated Document: ";
    document.display();
    cout << endl;

    return 0;
}
