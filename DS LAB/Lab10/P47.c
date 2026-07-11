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

void sort(){
    struct node *i;
    struct node *j;
    int temp;
    for(i=first;i->link!=NULL;i=i->link){
        for(j=i->link;j!=NULL;j=j->link){
            if(i->info>j->info){
                temp=i->info;
                i->info=j->info;
                j->info=temp;
            }
        }
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
    insertAtEnd(2);
    insertAtEnd(1);
    insertAtEnd(4);
    insertAtEnd(5);
    insertAtEnd(3);
    sort();
    display();
}