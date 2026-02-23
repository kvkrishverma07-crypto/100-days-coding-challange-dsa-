#include <stdio.h>
#include <stdlib.h>

// Node structure
struct Node {
    int data;
    struct Node* next;
};

// Create a new node
struct Node* createNode(int val) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = val;
    newNode->next = NULL;
    return newNode;
}

// Insert at end of list
void insertEnd(struct Node** head, int val) {
    struct Node* newNode = createNode(val);
    if (*head == NULL) {
        *head = newNode;
        return;
    }
    struct Node* temp = *head;
    while (temp->next != NULL)
        temp = temp->next;
    temp->next = newNode;
}

// Merge two sorted linked lists
struct Node* mergeSorted(struct Node* l1, struct Node* l2) {
    struct Node* result = NULL;

    while (l1 != NULL && l2 != NULL) {
        if (l1->data <= l2->data) {
            insertEnd(&result, l1->data);
            l1 = l1->next;
        } else {
            insertEnd(&result, l2->data);
            l2 = l2->next;
        }
    }

    // Append remaining nodes of l1
    while (l1 != NULL) {
        insertEnd(&result, l1->data);
        l1 = l1->next;
    }

    // Append remaining nodes of l2
    while (l2 != NULL) {
        insertEnd(&result, l2->data);
        l2 = l2->next;
    }

    return result;
}

// Print linked list
void printList(struct Node* head) {
    while (head != NULL) {
        printf("%d", head->data);
        if (head->next != NULL) printf(" ");
        head = head->next;
    }
    printf("\n");
}

// Free memory
void freeList(struct Node* head) {
    struct Node* temp;
    while (head != NULL) {
        temp = head;
        head = head->next;
        free(temp);
    }
}

int main() {
    struct Node* list1 = NULL;
    struct Node* list2 = NULL;

    int n, m, val;

    // Input first list
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &val);
        insertEnd(&list1, val);
    }

    // Input second list
    scanf("%d", &m);
    for (int i = 0; i < m; i++) {
        scanf("%d", &val);
        insertEnd(&list2, val);
    }

    // Merge and print
    struct Node* merged = mergeSorted(list1, list2);
    printList(merged);

    // Free memory
    freeList(list1);
    freeList(list2);
    freeList(merged);

    return 0;
}

