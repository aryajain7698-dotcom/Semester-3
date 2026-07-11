#include <stdio.h>
#include <stdlib.h>
struct node
{
    int info;
    struct node *link;
};
int n;
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
    n++;
}

void swap(int k){
    struct node *save=first;
    struct node *temp=first;
    int change;
    for(int i=0;i<k-1;i++){
        save=save->link;
    }
    for(int i=0;i<n-k;i++){
        temp=temp->link;
    }
    change=save->info;
    save->info=temp->info;
    temp->info=change;
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
    swap(3);
    display();
}