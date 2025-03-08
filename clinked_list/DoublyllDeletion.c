#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node* next;
    struct node* prev;
};

// Function to traverse and print the list
void traversal(struct node* head) {
    if (head == NULL) {
        printf("List is empty\n");
        return;
    }
    struct node* ptr = head;
    do {
        printf(" %d <->", ptr->data);
        ptr = ptr->next;
    } while (ptr != head);
    printf(" HEAD\n");
}

// Delete from the beginning
struct node* deleteAtBeg(struct node* head) {
    if (head == NULL) return NULL;
    
    if (head->next == head) { // Only one node in the list
        free(head);
        return NULL;
    }
    
    struct node* tail = head->prev;
    struct node* newHead = head->next;
    
    tail->next = newHead;
    newHead->prev = tail;
    
    free(head);
    return newHead;
}

// Delete from the end
struct node* deleteAtEnd(struct node* head) {
    if (head == NULL) return NULL;
    
    if (head->next == head) { // Only one node in the list
        free(head);
        return NULL;
    }
    
    struct node* tail = head->prev;
    struct node* newTail = tail->prev;
    
    newTail->next = head;
    head->prev = newTail;
    
    free(tail);
    return head;
}

// Delete from a specific index
struct node* deleteAtIndex(struct node* head, int index) {
    if (head == NULL) return NULL;
    
    if (index == 0) return deleteAtBeg(head);
    
    struct node* temp = head;
    for (int i = 0; i < index && temp->next != head; i++) {
        temp = temp->next;
    }
    
    if (temp == head) return head; // Index out of bounds
    
    temp->prev->next = temp->next;
    temp->next->prev = temp->prev;
    
    free(temp);
    return head;
}

// Insert at the end to create a sample list
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

// Main function to test the list
int main() {
    struct node* head = NULL;
    
    head = insertAtEnd(head, 4);
    head = insertAtEnd(head, 3);
    head = insertAtEnd(head, 6);
    head = insertAtEnd(head, 1);
    
    printf("Original list:");
    traversal(head);
    
    head = deleteAtBeg(head);
    printf("After deleting from the beginning:");
    traversal(head);
    
    head = deleteAtEnd(head);
    printf("After deleting from the end:");
    traversal(head);
    
    head = deleteAtIndex(head, 1);
    printf("After deleting at index 1:");
    traversal(head);
    
    return 0;
}
