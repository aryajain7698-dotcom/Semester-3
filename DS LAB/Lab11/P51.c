#include<stdio.h>
#include<stdlib.h>

struct node
{
    int info;
    struct node *link;
};

struct node *first=NULL;
struct node *last=NULL;

void insertAtStart(int x){
    struct node *new=(struct node*)malloc(sizeof(struct node));
    new->info=x;
    new->link=NULL;
    if(first==NULL){
        first=new;
        last=first;
        last->link=first;
    }else{
        last->link=new;
        new->link=first;
        first=new;
    }
}

void insertAtLast(int x){
    struct node *new=(struct node*)malloc(sizeof(struct node));
    new->info=x;
    new->link=NULL;
    if(first==NULL){
        first=new;
        last=first;
    }else{
        last->link=new;
        new->link=first;
        last=new;
    }
}

void deleteAtKthPosition(int pos){\
    struct node *curr=first;
    struct node *prev=last;
    if(pos==1){
        if(first=first->link){
            free(first);
        }
        struct node *temp=first;
        first=first->link;
        last->link=first;
    }
    for(int i=1;i<pos;i++){
        prev=curr;
        curr=curr->link;
    }
    if(curr==last){
        prev=last;
        last->link=first;
        free(curr);
    }else{
        struct node *temp=curr;
        prev->link=curr->link;
        free(temp);
    }
}

void display(){
    struct node *save=first;
    while(save!=last){
        printf("%d ",save->info);
        save=save->link;
    }
    printf("%d",last->info);
}

void main(){
    insertAtLast(5);
    insertAtLast(4);
    insertAtLast(3);
    insertAtLast(2);
    insertAtLast(1);
    deleteAtKthPosition(2);
    display();
}