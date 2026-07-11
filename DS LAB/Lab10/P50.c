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
    struct node *i;
    int temp;
    int k=1;
    for(i=first;i->link!=NULL;i=i->link){
        if(k%2==0){
            k++;
            continue;
        }
        temp=i->info;
        i->info=i->link->info;
        i->link->info=temp;
        k++;
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