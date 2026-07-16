#include <stdio.h>
#include <stdlib.h>
struct node
{
    int info;
    struct node *link;
};

struct node *first = NULL;
void insertAtEnd(int x)
{
    struct node *new = (struct node *)malloc(sizeof(struct node));
    new->info = x;
    new->link = NULL;
    if (first == NULL)
    {
        first = new;
    }
    else
    {
        struct node *temp = first;
        while (temp->link != NULL)
        {
            temp = temp->link;
        }
        temp->link = new;
    }
}

void swaping(){
    if (first == NULL || first->link == NULL) {
        return;
    }
    struct node* pred=NULL;
    struct node* save=first;
    struct node* next=save->link;

    while(save!=NULL && save->link!=NULL){
        next=save->link;
        if(pred==NULL){
            first=next;
        }else{
            pred->link=next;
        }
        save->link=next->link;
        next->link=save;
        pred=save;
        save=save->link;
    }
}

void display()
{
    if (first == NULL)
    {
        printf("The first is empty");
    }
    else
    {
        struct node *save = first;

        while (save != NULL)
        {
            printf("%d ", save->info);
            save = save->link;
        }
        printf("\n");
    }
}

void main(){
    insertAtEnd(1);
    insertAtEnd(2);
    insertAtEnd(3);
    insertAtEnd(4);
    insertAtEnd(5);
    insertAtEnd(6);
    insertAtEnd(7);
    insertAtEnd(8);
    swaping();
    display();
}
