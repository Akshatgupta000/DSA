#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

// Structure for a node in the BST
struct Node {
    int data;
    Node* left;
    Node* right;

    Node(int val) {
        data = val;
        left = nullptr;
        right = nullptr;
    }
};

// Function to insert a new node into the BST
Node* insert(Node* root, int data) {
    if (root == nullptr) {
        return new Node(data);
    }
    if (data < root->data) {
        root->left = insert(root->left, data);
    } else {
        root->right = insert(root->right, data);
    }
    return root;
}

// Function to perform inorder traversal and collect elements in a vector
void inorder(Node* root, vector<int>& elements) {
    if (root == nullptr) return;
    inorder(root->left, elements);
    elements.push_back(root->data);
    inorder(root->right, elements);
}

// Function to check if a vector is a palindrome
bool isPalindrome(const vector<int>& elements) {
    int n = elements.size();
    for (int i = 0; i < n / 2; ++i) {
        if (elements[i] != elements[n - 1 - i]) {
            return false;
        }
    }
    return true;
}

// Main function
int main() {
    Node* root = nullptr;

    // Insert elements into the BST
    root = insert(root, 5);
    root = insert(root, 3);
    root = insert(root, 7);
    root = insert(root, 3);
    root = insert(root, 5);
    
    // Collect elements in inorder
    vector<int> elements;
    inorder(root, elements);

    // Check if the inorder sequence is a palindrome
    if (isPalindrome(elements)) {
        cout << "The inorder traversal is a palindrome." << endl;
    } else {
        cout << "The inorder traversal is not a palindrome." << endl;
    }

    return 0;
}