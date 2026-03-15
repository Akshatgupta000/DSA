// In a warehouse management system, packages are organized sequentially using a singly linked list, where each node represents a package with its unique ID. To optimize the retrieval process, the system allows reversing the order of packages in groups of k nodes. 



// Your task is to read the package IDs, construct the linked list, and reverse the order of packages in groups of k.

// Input format :
// The first line of input consists of an integer n, the number of packages.

// The second line consists of n integers, the package IDs.

// The third line consists of an integer k, the size of the groups to reverse.

// Output format :
// The first line of output prints the original sequence of package IDs as a linked list.

// The second line prints the modified sequence of package IDs after reversing in groups of k.



// Refer to the sample output for formatting specifications.

// Code constraints :
// 1 ≤ n ≤ 20

// 1 ≤ package ID, k ≤ 100

// Sample test cases :
// Input 1 :
// 8
// 1 2 3 4 5 6 7 8
// 4
// Output 1 :
// Original Linked List: 1 2 3 4 5 6 7 8 
// Modified Linked List: 4 3 2 1 8 7 6 5 
// Input 2 :
// 5
// 1 2 3 4 5
// 3
// Output 2 :
// Original Linked List: 1 2 3 4 5 
// Modified Linked List: 3 2 1 5

#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
    int data;
    struct Node* next;
} Node;

Node* createNode(int data) {
    Node* newNode = (Node*)malloc(sizeof(Node));
    newNode->data = data;
    newNode->next = NULL;
    return newNode;
}

void appendNode(Node** head, int data) {
    Node* newNode = createNode(data);
    if (*head == NULL) {
        *head = newNode;
        return;
    }
    Node* last = *head;
    while (last->next != NULL) {
        last = last->next;
    }
    last->next = newNode;
}

void printList(Node* head) {
    Node* current = head;
    while (current != NULL) {
        printf("%d ", current->data);
        current = current->next;
    }
    printf("\n");
}

Node* reverseInGroups(Node* head, int k) {
    Node* current = head;
    Node* prevTail = NULL;
    Node* newHead = NULL;

    while (current != NULL) {
        int count = 0;
        Node* groupHead = current;
        Node* prev = NULL;

        // Reverse k nodes
        while (current != NULL && count < k) {
            Node* nextNode = current->next;
            current->next = prev;
            prev = current;
            current = nextNode;
            count++;
        }

        if (newHead == NULL) {
            newHead = prev;  // Set the new head for the first group
        }

        if (prevTail != NULL) {
            prevTail->next = prev;  // Connect the previous group's tail to the current group's head
        }

        prevTail = groupHead;  // Update the tail to the current group's head
    }

    return newHead;
}

int main() {
    int n, k;
    scanf("%d", &n);

    Node* head = NULL;
    int* packageIDs = (int*)malloc(n * sizeof(int));
    for (int i = 0; i < n; i++) {
        scanf("%d", &packageIDs[i]);
        appendNode(&head, packageIDs[i]);
    }
    scanf("%d", &k);

    printf("Original Linked List: ");
    printList(head);

    head = reverseInGroups(head, k);

    printf("Modified Linked List: ");
    printList(head);

    free(packageIDs);
    return 0;
}