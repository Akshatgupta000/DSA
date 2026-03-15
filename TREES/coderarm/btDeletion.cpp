#include <iostream>
#include <queue>

using namespace std;

// Definition of a binary tree node
struct Node {
    int data;
    Node* left;
    Node* right;

    Node(int val) : data(val), left(nullptr), right(nullptr) {}
};

// Function to insert a new node into the binary tree
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

// Function to delete a given key from the binary tree
void deleteNode(Node* root, int key) {
    if (root == nullptr) return;

    queue<Node*> q;
    q.push(root);
    
    Node* targetNode = nullptr;
    Node* deepestNode = nullptr;

    // Perform level order traversal to find target and deepest nodes
    while (!q.empty()) {
        deepestNode = q.front();
        q.pop();

        if (deepestNode->data == key) {
            targetNode = deepestNode; // Mark target for deletion
        }

        // Enqueue left child
        if (deepestNode->left) {
            q.push(deepestNode->left);
        }

        // Enqueue right child
        if (deepestNode->right) {
            q.push(deepestNode->right);
        }
    }

    // If target node was found, replace its data with deepest node's data
    if (targetNode != nullptr) {
        targetNode->data = deepestNode->data;
        
        // Now delete the deepest node
        delete deepestNode;
    } else {
        cout << "Node with value " << key << " not found in the tree." << endl;
    }
}

// Helper function to print inorder traversal of the tree
void inorder(Node* root) {
    if (root == nullptr) return;
    inorder(root->left);
    cout << root->data << " ";
    inorder(root->right);
}

int main() {
   Node* root = nullptr;

   int value;
   cout << "Enter values for nodes (-1 to stop):" << endl;
   while (true) {
       cin >> value;

       if (value == -1) {
           break; // Stop input when -1 is entered
       }
       root = insert(root, value); // Insert the value into the tree
   }

   cout << "Inorder traversal of the tree before deletion: ";
   inorder(root);
   cout << endl;

   int keyToDelete;
   cout << "Enter value of node to delete: ";
   cin >> keyToDelete; // Get the value to delete from user

   deleteNode(root, keyToDelete); // Delete specified node

   cout << "Inorder traversal of the tree after deletion: ";
   inorder(root);
   cout << endl;

   return 0;
}