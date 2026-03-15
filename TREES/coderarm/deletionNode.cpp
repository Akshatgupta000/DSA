#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* left;
    Node* right;

    Node(int value) {
        data = value;
        left = right = nullptr; // Use nullptr for better type safety
    }
};

Node* insert(Node* root, int value) {
    if (root == nullptr) {
        return new Node(value); // Create a new node if root is null
    }
    if (value < root->data) {
        root->left = insert(root->left, value);
    } else if (value > root->data) { // Use else if to avoid unnecessary checks
        root->right = insert(root->right, value);
    }
    return root; // Return the unchanged root pointer
}

Node* deletion(Node* root, int value) {
    if (root == nullptr) {
        return root; // Base case: empty tree
    }
    
    // Traverse the tree to find the node to delete
    if (value < root->data) {
        root->left = deletion(root->left, value);
    } else if (value > root->data) {
        root->right = deletion(root->right, value);
    } else { // Node found
        // Case 1: Node with only one child or no child
        if (root->left == nullptr) {
            Node* temp = root->right;
            delete root; // Free memory
            return temp; // Return the right child
        } else if (root->right == nullptr) {
            Node* temp = root->left;
            delete root; // Free memory
            return temp; // Return the left child
        }

        // Case 2: Node with two children: Get the inorder successor (smallest in the right subtree)
        Node* temp = root->right; 
        while (temp && temp->left != nullptr) { // Find the leftmost node in the right subtree
            temp = temp->left;
        }
        
        // Copy the inorder successor's content to this node
        root->data = temp->data;

        // Delete the inorder successor
        root->right = deletion(root->right, temp->data);
    }

    return root; // Return the unchanged pointer
}

void inorder(Node* root) {
    if (root == nullptr) { // Check for null before accessing nodes
        return;
    }
    inorder(root->left);
    cout << root->data << " ";
    inorder(root->right);
}

int main() {
    Node* root = nullptr;
    int value;

    cout << "Enter values to insert into the BST (-1 to stop):" << endl;
    
    while (true) {
        cin >> value;

        if (value == -1) {
            break; // Exit condition for input
        }

        root = insert(root, value);
    }

    cout << "InOrder Traversal: ";
    inorder(root);
    cout << endl;

    cout << "Enter a value to delete from the BST:" << endl;
    cin >> value;
    
    root = deletion(root, value); // Call deletion function

    cout << "InOrder Traversal after deletion: ";
    inorder(root);
    cout << endl;

    return 0;
}