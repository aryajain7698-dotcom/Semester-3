#include<stdio.h>
#include<stdlib.h>
struct node
{
    int info;
    struct node *link;
};

struct node *insertAtFirst(int x, struct node *first)
{
    struct node *new = (struct node *)malloc(sizeof(struct node));
    new->info = x;
    new->link = first;

    first = new;

    return first;
}

struct node *remove_dup(struct node *first){

    struct node *save=first;
    

    while(save->link!=NULL){
        if(save->info==save->link->info){
            struct node *dup=save->link;
            save->link=dup->link;
            free(dup);
        }else{
            save=save->link;
        }
    }
    return first;
}

void display(struct node *first)
{
    if (first == NULL)
    {
        printf("The list is empty\n");
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
    struct node *first=NULL;
    int a;
    while(1){
        printf("Enter 1.insertAtFirst, 2.display, 3.remove_dup, 0.exit:");
        scanf("%d",&a);
        switch (a)
        {
        case 1:
        {
            printf("Enter the number:");
            int x;
            scanf("%d",&x);
            first = insertAtFirst(x,first);
            break;
        }
        case 2:
        {
            display(first);
            break;
        }
        case 3:
        {
            first=remove_dup(first);
            break;
        }
        case 0:
        {
            return;
        }
        default:
        {
            printf("Enter the correct value.\n");
            break;
        }
        }
    }
}