#include<stdio.h>
#include<stdlib.h>

struct node{
    struct node *lptr;
    int info;
    struct node *rptr;
};

struct node * first= NULL;

void insertAtFirst(int x){
    struct node *new=(struct node *)malloc(sizeof(struct node));
    new->lptr=NULL;
    new->rptr=NULL;
    new->info=x;

    if(first==NULL){
        first=new;
    }else{
        new->rptr=first;
        first->lptr=new;
        first=new;
    }
}

void deleteAtKthPosition(int pos){
    int count=1;
    struct node* prev=NULL;
    struct node* save=first;
    struct node* next=save->rptr;
    while(save!=NULL){
    if(count==pos){
        if(prev==NULL){
            struct node *temp=save;
            save=save->rptr;
            first=save;
            free(temp);
            return;
        }else{
            prev->rptr=next;
            next->lptr=prev;
            free(save);
            return;
        }
    }else{
        prev=save;
        save=save->rptr;
        next=save->rptr;
        count++;
    }
}
}

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
    deleteAtKthPosition(5);
    display();
}