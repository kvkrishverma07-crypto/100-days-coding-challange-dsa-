#include <stdio.h>
#include <stdlib.h>

// Define the Linked List Node
struct Node {
    int data;
    struct Node* next;
};

int main() {
    int n, key, count = 0;
    struct Node *head = NULL, *tail = NULL;

    // 1. Get the number of nodes
    if (scanf("%d", &n) != 1) return 0;

    // 2. Build the linked list using dynamic memory allocation
    for (int i = 0; i < n; i++) {
        int val;
        scanf("%d", &val);

        // Allocate memory for a new node
        struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
        newNode->data = val;
        newNode->next = NULL;

        if (head == NULL) {
            head = newNode;  // First node becomes the head
            tail = newNode;
        } else {
            tail->next = newNode; // Attach to the end
            tail = newNode;       // Update tail
        }
    }

    // 3. Get the key to search for
    scanf("%d", &key);

    // 4. Traverse and count occurrences
    struct Node* current = head;
    while (current != NULL) {
        if (current->data == key) {
            count++;
        }
        current = current->next;
    }

    // 5. Output the result
    printf("%d\n", count);

    // 6. Free memory (Clean up)
    current = head;
    while (current != NULL) {
        struct Node* temp = current;
        current = current->next;
        free(temp);
    }

    return 0;
}
