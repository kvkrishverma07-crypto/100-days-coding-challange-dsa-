#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

int main() {
    int n, k, value;
    struct Node *head = NULL, *tail = NULL, *newNode = NULL;

    // 1. Read input and create the list
    if (scanf("%d", &n) != 1 || n <= 0) return 0;

    for (int i = 0; i < n; i++) {
        newNode = (struct Node*)malloc(sizeof(struct Node));
        scanf("%d", &value);
        newNode->data = value;
        newNode->next = NULL;

        if (head == NULL) {
            head = newNode;
            tail = newNode;
        } else {
            tail->next = newNode;
            tail = newNode;
        }
    }

    // Read k
    scanf("%d", &k);
    
    // If k is larger than n, we only need to rotate k % n times
    k = k % n;

    if (k == 0) {
        // No rotation needed, just print and exit
        struct Node* curr = head;
        while (curr) {
            printf("%d ", curr->data);
            curr = curr->next;
        }
        return 0;
    }

    // 2. Make the list circular
    tail->next = head;

    // 3. Find the new tail: it is at position (n - k)
    // The new head will be at (n - k + 1)
    struct Node* newTail = head;
    for (int i = 1; i < (n - k); i++) {
        newTail = newTail->next;
    }

    // 4. Break the circle
    head = newTail->next;
    newTail->next = NULL;

    // 5. Print the rotated list
    struct Node* curr = head;
    while (curr != NULL) {
        printf("%d ", curr->data);
        curr = curr->next;
    }

    return 0;
}
