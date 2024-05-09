#include <stdio.h>
#include <stdlib.h>

// Define a structure for a node in the doubly linked list
struct Node {
    int data;
    struct Node* prev;
    struct Node* next;
};

// Function to create a new node
struct Node* createNode(int data) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->prev = NULL;
    newNode->next = NULL;
    return newNode;
}

// Function to insert a node at the beginning of the doubly linked list
void insertAtBeginning(struct Node** headRef, int data) {
    struct Node* newNode = createNode(data);
    if (*headRef != NULL) {
        (*headRef)->prev = newNode;
    }
    newNode->next = *headRef;
    *headRef = newNode;
    printf("Node with data %d inserted at the beginning.\n", data);
}

// Function to insert a node at the end of the doubly linked list
void insertAtEnd(struct Node** headRef, int data) {
    struct Node* newNode = createNode(data);
    struct Node* temp = *headRef;

    if (*headRef == NULL) {
        *headRef = newNode;
    } else {
        while (temp->next != NULL) {
            temp = temp->next;
        }
        temp->next = newNode;
        newNode->prev = temp;
    }

    printf("Node with data %d inserted at the end.\n", data);
}

// Function to delete a node with a given data from the doubly linked list
void deleteNode(struct Node** headRef, int data) {
    struct Node* temp = *headRef;

    // Find the node with the given data
    while (temp != NULL && temp->data != data) {
        temp = temp->next;
    }

    if (temp == NULL) {
        printf("Node with data %d not found. Deletion not possible.\n", data);
        return;
    }

    // Adjust the pointers to remove the node
    if (temp->prev != NULL) {
        temp->prev->next = temp->next;
    } else {
        *headRef = temp->next;
    }

    if (temp->next != NULL) {
        temp->next->prev = temp->prev;
    }

    free(temp);
    printf("Node with data %d deleted.\n", data);
}

// Function to display the doubly linked list in forward direction
void displayForward(struct Node* head) {
    while (head != NULL) {
        printf("%d <-> ", head->data);
        head = head->next;
    }
    printf("NULL\n");
}

// Function to display the doubly linked list in reverse direction
void displayReverse(struct Node* head) {
    while (head != NULL && head->next != NULL) {
        head = head->next;
    }

    while (head != NULL) {
        printf("%d <-> ", head->data);
        head = head->prev;
    }
    printf("NULL\n");
}

// Function to free the allocated memory for the doubly linked list
void freeList(struct Node* head) {
    struct Node* temp;
    while (head != NULL) {
        temp = head;
        head = head->next;
        free(temp);
    }
}

int main() {
    // Initialize an empty doubly linked list
    struct Node* head = NULL;

    // Insert nodes at the beginning
    insertAtBeginning(&head, 3);
    insertAtBeginning(&head, 2);
    insertAtBeginning(&head, 1);

    // Display the doubly linked list in forward direction
    printf("Doubly Linked List (Forward):\n");
    displayForward(head);

    // Insert nodes at the end
    insertAtEnd(&head, 4);
    insertAtEnd(&head, 5);

    // Display the doubly linked list in reverse direction
    printf("Doubly Linked List (Reverse):\n");
    displayReverse(head);

    // Delete a node
    deleteNode(&head, 3);

    // Display the doubly linked list after deletion
    printf("Doubly Linked List after deletion:\n");
    displayForward(head);

    // Free the allocated memory for the doubly linked list
    freeList(head);

    return 0;
}

