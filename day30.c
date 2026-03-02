#include <stdio.h>
#include <stdlib.h>

// Define the structure for a Polynomial Term
struct Node {
    int coeff;
    int exp;
    struct Node* next;
};

int main() {
    int n;
    struct Node *head = NULL, *tail = NULL;

    // 1. Read the number of terms
    if (scanf("%d", &n) != 1 || n <= 0) return 0;

    // 2. Build the Linked List
    for (int i = 0; i < n; i++) {
        struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
        scanf("%d %d", &newNode->coeff, &newNode->exp);
        newNode->next = NULL;

        if (head == NULL) {
            head = newNode;
            tail = newNode;
        } else {
            tail->next = newNode;
            tail = newNode;
        }
    }

    // 3. Traverse and Print in standard form
    struct Node* temp = head;
    while (temp != NULL) {
        // Handle coefficient and x term
        if (temp->exp == 0) {
            printf("%d", temp->coeff);
        } else if (temp->exp == 1) {
            printf("%dx", temp->coeff);
        } else {
            printf("%dx^%d", temp->coeff, temp->exp);
        }

        // Handle the '+' sign between terms
        if (temp->next != NULL) {
            printf(" + ");
        }

        temp = temp->next;
    }
    printf("\n");

    return 0;
}
