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

struct node* insertAtBeg(struct node* head, int data){
    struct node* ptr = (struct node*)malloc(sizeof(struct node));
    struct node* p = head->next;
    ptr->data = data;
    while(p->next != head){
        p = p->next;
    }
    p->next = ptr;
    ptr->next = head;
    head = ptr;
    return head;
}

struct node* insertAtEnd(struct node* head, int data){
    struct node* ptr = (struct node*)malloc(sizeof(struct node));
    struct node* p = head;
    ptr->data = data;
    while(p->next != head){
        p = p->next;
    }
    p->next = ptr;
    ptr->next = head;
    return head;
}

struct node* insertAtIndex(struct node* head, int data, int index){
    struct node* ptr = (struct node*)malloc(sizeof(struct node));
    struct node* p = head;
    int i = 0;
    while(i != index-1){
        p = p->next;
        i++;
    }
    ptr->data = data;
    ptr->next = p->next;
    p->next = ptr;
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