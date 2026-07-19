#include<stdio.h>
#include<stdlib.h>

struct node{
    struct node *lptr;
    int info;
    struct node *rptr;
};

struct node * first= NULL;

void insertAtEnd(int x){
    struct node *new=(struct node *)malloc(sizeof(struct node));
    new->lptr=NULL;
    new->rptr=NULL;
    new->info=x;

    struct node *save=first;
    if(first==NULL){
        first=new;
    }else{
        while(save->rptr!=NULL){
            save=save->rptr;
        }
        save->rptr=new;
        new->lptr=save;
    }
}

void alternateDel(){
    struct node *prev=first;
    struct node *save=prev->rptr;
    struct node *next=save->rptr;

    while(save!=NULL){
        struct node *temp=save;
        if(next!=NULL){
            prev->rptr=next;
            next->lptr=prev;
            save=next;
            next=save->rptr;
            free(temp);
        }else{
            prev->rptr=NULL;
            free(save);
            return;
        }
        prev=save;
        save=save->rptr;
        if(save==NULL){
            return;
        }
        next=save->rptr;
    }
}

void display(){
    struct node *save=first;
    while(save!=NULL){
        printf("%d ",save->info);
        save=save->rptr;
    }
}

void main(){
    insertAtEnd(1);
    insertAtEnd(2);
    insertAtEnd(3);
    insertAtEnd(4);
    insertAtEnd(5);
    insertAtEnd(6);
    alternateDel();
    display();
}