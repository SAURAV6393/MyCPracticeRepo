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
struct node* insertionATbeg(struct node* head, int x){
    struct node* ptr = (struct node*)malloc(sizeof(struct node));
    ptr->next = head;
    ptr->data = x;
    return ptr;
}
struct node* insertionATend(struct node* head, int x){
    struct node* ptr = (struct node*)malloc(sizeof(struct node));
    struct node* p = head;
    while(p->next!=NULL){
        p = p->next;
    }
    p->next = ptr;
    ptr->data = x;
    ptr->next = NULL;
    return head; 
}

struct node* insertionATindex(struct node* head, int x,int idx){
    struct node* ptr = (struct node*)malloc(sizeof(struct node));
    struct node* p = head;
    int i = 0;
    while(i!=idx-1){
        p = p->next;
        i++;
    }
    ptr->next = p->next;
    p->next = ptr;
    ptr->data = x;
    return head;
}
struct node* deleteAtBeg(struct node* head){
    struct node* ptr = head;
    head = head->next;
    free(ptr);
    return head;
}

int main(){
        struct node* head;
        struct node* second;
        struct node* third;
        head = (struct node*)malloc(sizeof(struct node));
        second = (struct node*)malloc(sizeof(struct node));
        third = (struct node*)malloc(sizeof(struct node));


        head->data = 4;
        head->next = second;

        second->data = 3;
        second->next = third;

        third->data = 8;
        third->next = NULL;

    traversal(head);
    // head = insertionATbeg(head,89);
    // printf("\n");
    // traversal(head);
    head = insertionATend(head, 1);
    printf("\n");
    traversal(head);
    // head = insertionATindex(head, 69, 2);
    // printf("\n");
    //traversal(head);
    head = deleteAtBeg(head);
    printf("\n");
    traversal(head);
    return 0;


}
