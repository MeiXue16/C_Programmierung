#include<stdio.h>

struct node{
    int data;
    struct node *next;
};
struct node *mknode(int val){
    struct node *p = NULL;
    if((p = malloc(sizeof(struct node))) != NULL){
        p->data = val;
        p->next = NULL;
        return p;
    }
    else{
        error();
        return NULL;
    }

}
struct node *head;
void insertSorted(int val){
    struct node *p = head, *prev = NULL, *new = mknode(val);
    while(p->next != NULL && p->data <= val){
        prev = p;
        p = p->next;
    }
    if(p->data >= val){
        if(p == head){
          head = new;
          new->next = p;
        }
        else{
          prev->next = new;
          new->next = p;
        }
    }
    else{
        p->next  = new;
        new->next =NULL;
    }
}
...
struct node *head;
struct node *reverse(){
    if(head == NULL) return NULL;
    struct node *p = head, *prev = NULL, *newhead, *tmp;
    while(p != NULL){
        newhead = p;
        tmp = p->next;
        p->next = prev;
        prev = p;
        p = tmp;
    }
    return newhead;
};
