#include <stdio.h>
#include <stdlib.h>

// Define the structure for a node
struct Node {
    int data;
    struct Node* next;
};

int main() {
    int n, value;
    struct Node *head = NULL, *temp = NULL, *newNode = NULL;

    // Read the number of elements
    if (scanf("%d", &n) != 1 || n <= 0) return 0;

    for (int i = 0; i < n; i++) {
        // Allocate memory for a new node
        newNode = (struct Node*)malloc(sizeof(struct Node));
        scanf("%d", &value);
        newNode->data = value;
        newNode->next = NULL;

        if (head == NULL) {
            head = newNode;
            temp = newNode;
        } else {
            temp->next = newNode;
            temp = newNode;
        }
    }

    // Making it circular: point the last node back to head
    if (temp != NULL) {
        temp->next = head;
    }

    // Traversal
    if (head != NULL) {
        struct Node* current = head;
        do {
            printf("%d ", current->data);
            current = current->next;
        } while (current != head); // Stop when we wrap back to head
    }

    return 0;
}
