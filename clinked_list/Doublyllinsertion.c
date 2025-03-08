#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node* next;
    struct node* prev;
};

// Function to traverse and print the list
void traversal(struct node* head) {
    struct node* ptr = head;
    if (head != NULL) {
        do {
            printf(" %d <->", ptr->data);
            ptr = ptr->next;
        } while (ptr != head);
    }
    printf(" HEAD\n");
}

// Insert at the beginning of a circular doubly linked list
struct node* insertAtBeg(struct node* head, int data) {
    struct node* ptr = (struct node*)malloc(sizeof(struct node));
    ptr->data = data;
    
    if (head == NULL) {
        ptr->next = ptr;
        ptr->prev = ptr;
        return ptr;
    }

    struct node* tail = head->prev;
    ptr->next = head;
    ptr->prev = tail;
    tail->next = ptr;
    head->prev = ptr;
    
    return ptr;  // New head
}

// Insert at the end
struct node* insertAtEnd(struct node* head, int data) {
    struct node* ptr = (struct node*)malloc(sizeof(struct node));
    ptr->data = data;

    if (head == NULL) {
        ptr->next = ptr;
        ptr->prev = ptr;
        return ptr;
    }

    struct node* tail = head->prev;
    tail->next = ptr;
    ptr->prev = tail;
    ptr->next = head;
    head->prev = ptr;

    return head;
}

// Insert at a specific index
struct node* insertAtIndex(struct node* head, int data, int index) {
    if (head == NULL || index == 0) {
        return insertAtBeg(head, data);
    }

    struct node* ptr = (struct node*)malloc(sizeof(struct node));
    ptr->data = data;

    struct node* temp = head;
    for (int i = 0; i < index - 1 && temp->next != head; i++) {
        temp = temp->next;
    }

    ptr->next = temp->next;
    ptr->prev = temp;
    temp->next->prev = ptr;
    temp->next = ptr;

    return head;
}

// Main function to test the list
int main() {
    struct node* head = NULL;

    head = insertAtBeg(head, 4);
    head = insertAtEnd(head, 3);
    head = insertAtEnd(head, 6);
    head = insertAtEnd(head, 1);

    printf("Original list:");
    traversal(head);

    head = insertAtBeg(head, 10);
    printf("After inserting 10 at the beginning:");
    traversal(head);

    head = insertAtEnd(head, 20);
    printf("After inserting 20 at the end:");
    traversal(head);

    head = insertAtIndex(head, 15, 2);
    printf("After inserting 15 at index 2:");
    traversal(head);

    return 0;
}
