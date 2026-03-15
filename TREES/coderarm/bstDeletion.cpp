#include<iostream>
using namespace std;

struct Node {
public:
    int data;
    Node* left;
    Node* right;

    Node(int value) {
        data = value;
        left = right = nullptr;
    }
};

// Function to insert a value into the BST
Node* insert(Node* root, int value) {
    if (root == nullptr) {
        return new Node(value);
    }
    if (value < root->data) {
        root->left = insert(root->left, value);
    } else if (value > root->data) {
        root->right = insert(root->right, value);
    }
    return root;
}

// Function for in-order traversal
void inorder(Node* root) {
    if (root == nullptr) {
        return;
    }
    inorder(root->left);
    cout << root->data << " ";
    inorder(root->right);
}

// Function to delete a node from the BST
Node* deletion(Node* root, int target) {
    // Base case: If the tree is empty
    if (root == nullptr) {
        return nullptr;
    }

    // Recur down the tree to find the target node
    if (target < root->data) {
        root->left = deletion(root->left, target);
    } else if (target > root->data) {
        root->right = deletion(root->right, target);
    } else { // Node found
        // Case 1: Node with only one child or no child
        if (root->left == nullptr) {
            Node* temp = root->right;
            delete root; // Free memory
            return temp; // Return the non-null child
        } else if (root->right == nullptr) {
            Node* temp = root->left;
            delete root; // Free memory
            return temp; // Return the non-null child
        }

        // Case 2: Node with two children
        // Find the greatest element in the left subtree (in-order predecessor)
        Node* child = root->left;  
        Node* parent = root;

        while (child->right != nullptr) {
            parent = child;
            child = child->right;
        }

        // If parent is not equal to root, adjust pointers
        if (parent != root) {   
            parent->right = child->left; // Link parent's right to child's left subtree
            child->left = root->left;     // Link child's left to root's left subtree
            child->right = root->right;   // Link child's right to root's right subtree
            delete root;                  // Free memory for the deleted node
            return child;                 // Return new subtree rooted at child
        } else {   // When parent and child are equal (i.e., deleting the in-order predecessor)
            child->right = root->right;   // Link child's right to root's right subtree
            delete root;                   // Free memory for the deleted node
            return child;                  // Return new subtree rooted at child
        }
    }
    return root;
}

int main() {
    Node* root = nullptr;
    int value;

    cout << "Enter values to insert into BST (-1 to stop):" << endl;
    
    while (true) {
        cin >> value;

        if (value == -1) {
            break;
        }

        root = insert(root, value);
    }

    cout << "InOrder before deletion: ";
    inorder(root);
    cout << endl;

    cout << "Enter value to delete from BST:" << endl;
    
    cin >> value;
    
    root = deletion(root, value);

    cout << "InOrder after deletion: ";
    inorder(root);

    cout << endl;

    return 0;
}