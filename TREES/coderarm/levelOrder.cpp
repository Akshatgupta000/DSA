#include <iostream>
#include <queue>
using namespace std;

struct Node
{
public:
    int data;
    Node *left;
    Node *right;

    Node(int value)
    {
        data = value;
        left = right = NULL;
    }
};

Node *insert(Node *root, int value)
{
    if (root == NULL)
    {
        return new Node(value);
    }
    if (value < root->data)
    {
        root->left = insert(root->left, value);
    }
    if (value > root->data)
    {
        root->right = insert(root->right, value);
    }
    return root;
}

void levelOrder(Node *root)
{
    if (root == nullptr)
    {
        return;
    }
    queue<Node *> q;
    q.push(root);

    while (!q.empty())
    {
        Node *temp = q.front();
        q.pop();

        cout << temp->data << " ";

        if (temp->left != nullptr)
        {
            q.push(temp->left);
        }
        if (temp->right != nullptr)
        {
            q.push(temp->right);
        }
    }
}

int main()
{
    Node *root = nullptr;
    int value;
    while (true)
    {
        cin >> value;

        if (value == -1)
        {
            break;
        }

        root = insert(root, value);
    }

    cout << "Level Order: ";
    levelOrder(root);
    cout << endl;
    return 0;
}