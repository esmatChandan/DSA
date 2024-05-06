#include <stdio.h>
#include <stdlib.h>

// Defining structure of the node of linked list
struct Node {
    int data;
    struct Node* next;
};

// Function to insert a new node at the beginning of the linked list
void push(struct Node** head_ref, int new_data) {
    // allocate node
    struct Node* new_node = (struct Node*)malloc(sizeof(struct Node));

    // put in the data
    new_node->data = new_data;

    // link the old list off the new node
    new_node->next = (*head_ref);

    // move the head to point to the new node
    (*head_ref) = new_node;
}

// Function to delete an element from the last location of a linked list
void deleteNodeFromLast(struct Node** head_ref) {
    // Base case
    if (*head_ref == NULL) {
        return;
    }

    // If there is only one node in the list
    if ((*head_ref)->next == NULL) {
        free(*head_ref);
        *head_ref = NULL;
        return;
    }

    // Find the second last node
    struct Node* temp = *head_ref;
    while (temp->next->next != NULL) {
        temp = temp->next;
    }

    // Unlink the last node
    free(temp->next); // Free memory

    temp->next = NULL; // Unlink the last node from list
}

// Function to print the linked list
void printList(struct Node* node) {
    while (node != NULL) {
        printf("%d ", node->data);
        node = node->next;
    }
}


// Driver program to test above functions
int main() {
    struct Node* head = NULL;

    // Insert nodes into the linked list
    push(&head, 2);
    push(&head, 3);
    push(&head, 6);
    push(&head, 9);

    printf("Created Linked list is: ");
    printList(head);

    deleteNodeFromLast(&head);

    printf("\nLinked list after Deletion from last: ");
    printList(head);

    return 0;
}
