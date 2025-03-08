#include<stdio.h>
#include<stdlib.h>

struct node {
    int data;
    struct node* next;  
};

void traversal(struct node* ptr){
    while(ptr!=NULL){
        printf(" %d ->", ptr->data);
        ptr = ptr->next;
    }
}

struct node* deleteAtBeg(struct node* head){
    struct node* ptr = head;
    head = head->next;
    free(ptr);
    return head;
}

struct node* deleteAtIdx(struct node* head, int idx){
    struct node* p = head;
    int i = 0;
    while(i!=idx-1){
    p = p->next;
    i++;
}
    struct node* q = p->next;   
    p->next = q->next;
    free(q);
    return head;
}

struct node* deleteAtEnd(struct node* head){
    struct node* p = head;
    struct node* q = head->next;
    while(q->next!=NULL){
        p = p->next;
        q = q->next;
    }
    p->next = NULL;
    free(q);
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

    third->data = 8;
    third->next = fourth;

    fourth->data = 1;
    fourth->next = NULL;

    traversal(head);
    printf("\n");
    
    // head = deleteAtBeg(head);
    // traversal(head);
    // printf("\n");

    // head = deleteAtIdx(head, 2);
    // traversal(head);
    // printf("\n");

    head = deleteAtEnd(head);
    traversal(head);

    return 0;
}
