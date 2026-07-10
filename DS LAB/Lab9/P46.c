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

struct node *first2 = NULL;

void insertAtFirst2(int x)
{
    struct node *new = (struct node *)malloc(sizeof(struct node));
    new->info = x;
    new->link = first2;
    
    first2 = new;
}


void reverse()
{
    struct node * save=first;
    while(save!=NULL){
        insertAtFirst2(save->info);
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

void display2()
{
    if (first2 == NULL)
    {
        printf("The first2 is empty");
    }
    else
    {
        struct node *save = first2;

        while (save != NULL)
        {
            printf("%d ", save->info);
            save = save->link;
        }
        printf("\n");
    }
}

void main()
{
    while (1)
    {
        int a;
        printf("Enter 1.insertAtEnd, 2.reverse, 3.display, 4.display2:");
        scanf("%d", &a);
        switch (a)
        {
        case 1:
        {
            printf("Enter the number: ");
            int x;
            scanf("%d", &x);
            insertAtEnd(x);
            break;
        }
        case 2:
        {
            reverse();
            break;
        }
        case 3:
        {
            display();
            break;
        }
        case 4:
        {
            display2();
            break;
        }
        case 0:
        {
            return;
        }
        default:
        {
            printf("Enter the appropriate choice.");
            break;
        }
        }
    }
}