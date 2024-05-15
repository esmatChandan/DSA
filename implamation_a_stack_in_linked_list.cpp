#include <stdio.h>
#include <stdlib.h>

// Defining structure of the node of the stack
struct Node {
    int data;
    struct Node* next;
};

// Function to add an element to the stack
void push(struct Node** top_ref, int new_data) {
    // allocate node
    struct Node* new_node = (struct Node*)malloc(sizeof(struct Node));

    // put in the data
    new_node->data = new_data;

    // link the old top node
    new_node->next = (*top_ref);

    // move the top to point to the new node
    (*top_ref) = new_node;
}

// Function to remove an element from the stack
int pop(struct Node** top_ref) {
    // check if stack is empty
    if (*top_ref == NULL) {
        printf("Stack is empty\n");
        return -1;
    }

    // top node to be deleted
    struct Node* top = *top_ref;

    // read the top node data
    int popped_data = top->data;

    // move the top pointer to the next node
    *top_ref = top->next;

    // delete the top node
    free(top);

    return popped_data;
}

// Function to print the stack
void printStack(struct Node* node) {
    while (node != NULL) {
        printf("%d ", node->data);
        node = node->next;
    }
}

// Driver program to test above functions
int main() {
    struct Node* top = NULL;

    // push elements into the stack
    push(&top, 2);
    push(&top, 3);
    push(&top, 1);
    push(&top, 7);

    printf("Created Stack is: ");
    printStack(top);

    // pop elements from the stack
    int popped_data = pop(&top);
    printf("\nPopped value: %d", popped_data);

    printf("\nStack after Popping: ");
    printStack(top);

    return 0;
}
