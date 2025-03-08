#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node* next;
};

void traversal(struct node* head){
    struct node* ptr = head;
    if (head != NULL) {
        do{
            printf(" %d ->", ptr->data);
            ptr = ptr->next;
        }while(ptr != head);
    }
    printf(" HEAD\n");
}

struct node* deleteAtBeg(struct node* head){
    if (head == NULL) return NULL;
    struct node* ptr = head;
    struct node* p = head;
    while(p->next != head){
        p = p->next;
    }
    p->next = head->next;
    head = head->next;
    free(ptr);
    return head;
}

struct node* deleteAtEnd(struct node* head){
    if (head == NULL) return NULL;
    struct node* ptr = head;
    struct node* p = head;
    while(ptr->next->next != head){
        ptr = ptr->next;
    }
    p = ptr->next;
    ptr->next = head;
    free(p);
    return head;
}

struct node* deleteAtIndex(struct node* head, int index){
    if (head == NULL) return NULL;
    struct node* ptr = head;
    struct node* p;
    int i = 0;
    while(i != index-1){
        ptr = ptr->next;
        i++;
    }
    p = ptr->next;
    ptr->next = p->next;
    free(p);
    return head;
}

int main(){
    struct node* head;
    struct node* second;
    struct node* third;
    struct node* fourth;

    head = (struct node*)malloc(sizeof(struct node));
    second = (struct node*)malloc(sizeof(struct node));
    third = (struct node*)malloc(sizeof(struct node));
    fourth = (struct node*)malloc(sizeof(struct node));

    head->data = 4;
    head->next = second;

    second->data = 3;
    second->next = third;

    third->data = 6;
    third->next = fourth;

    fourth->data = 1;
    fourth->next = head;

    printf("Original list:");
    traversal(head);

    head = deleteAtBeg(head);
    printf("After deleting at the beginning:");
    traversal(head);

    head = deleteAtEnd(head);
    printf("After deleting at the end:");
    traversal(head);

    head = deleteAtIndex(head, 1);
    printf("After deleting at index 1:");
    traversal(head);

    return 0;
}