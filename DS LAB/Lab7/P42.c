#include <stdio.h>
#include <stdlib.h>
struct node
{
    int info;
    struct node *link;
};

struct node *first = NULL;

struct node *insertAtFirst(int x, struct node *first)
{
    struct node *new = (struct node *)malloc(sizeof(struct node));
    new->info = x;
    new->link = first;

    first = new;

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

struct node *deleteAtFirst(struct node *first, int *deleted_value)
{
    if (first == NULL)
    {
        printf("The list is empty\n");
        return NULL;
    }
    else
    {

        struct node *temp = first;

        *deleted_value = first->info;
        first = first->link;

        free(temp);
        return first;

    }
}

struct node * insend(int x,struct node *first){
    struct node *new=(struct node *)malloc(sizeof(struct node));
    new->info = x;
    new->link = NULL;

    if(first==NULL){
        first=new;
    }else{
        struct node *save=first;
        while(save->link!=NULL){
            save=save->link;
        }
        save->link=new;
    }
    return first;
}

struct node * deleteAtEnd(struct node * frist,int *deleted_value){
    if(first==NULL){
        printf("The list is empty");
        return NULL;
    }else if(frist->link==NULL){
        *deleted_value=first->info;
        free(first);
        return NULL;
    }else{
        struct node * save=first;
        while(save->link->link!=NULL){
            save=save->link;
        }
        struct node * temp=save->link;
        *deleted_value=temp->info;
        save->link=NULL;
        free(temp);
        return first;
    }
}

struct node * delete(struct node * first,int x,int *deleted_value){
    if(first ==NULL){
        printf("The list is empty");
        return NULL;
    }else if(first->info == x && first->link==NULL){
        *deleted_value=x;
        free(first);
        return NULL;
    }else{
        struct node * save=first;
        while(save->link->info != x && save->link!=NULL){
            save=save->link;
        }
        struct node * temp=save->link;
        if(temp==NULL){
            printf("Not found");
            return first;
        }else{
            *deleted_value=x;
            save->link=save->link->link;
            free(temp);
            return first;
        }
    }
}

int count(struct node * first){
    if(first == NULL){
        return 0;
    }else{int count=0;
    struct node * save=first;
    while(save!=NULL){
        save=save->link;
        count++;
    }
    return count;
}
}
int main(){
    while(1){
    int a;
    int deleted_value = -1;
        printf("Enter 1.insertatfirst, 2.display, 3.deleteatfirst, 4.insend, 5.deleteAtEnd, 6.delete, 7.count, 0.exit:");
        scanf("%d", &a);
        switch(a)
        {
        case 1:{
            printf("Enter the number:");
            int x;
            scanf("%d", &x);
            first = insertAtFirst(x, first);
            break;
        }
        case 2:{
            display(first);
            break;
        }
        case 3:{
            first = deleteAtFirst(first, &deleted_value);
            printf("%d", deleted_value);
            break;
        }case 4:{
            printf("Enter the number:");
            int x;
            scanf("%d", &x);
            first=insend(x,first);
            break;
        }case 5:{
            first = deleteAtEnd(first, &deleted_value);
            printf("%d", deleted_value);
            break;
        }case 6:{
            printf("Enter the number:");
            int x;
            scanf("%d", &x);
            first = delete(first,x,&deleted_value);
            break;
        }case 7:{
            int Total_nodes=count(first);
            printf("The Number of nodes are %d\n",Total_nodes);
            break;
        }case 0:{
            return 0;
        }default:{
            printf("Enter the correct value.\n");
            break;
    }
    }
    }
}