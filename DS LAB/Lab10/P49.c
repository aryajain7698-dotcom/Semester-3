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

int min(int a, int b){
    if(a<b){
        return a;
    }
    return b;
}

void gcd(){
    struct node *save=first;
    int gd=0;
    struct node *temp=save->link;
    for(;temp!=NULL;){
        struct node *new=(struct node *)malloc(sizeof(struct node));
        int a=save->info;
        int b=temp->info;
        for(int j=1;j<=min(a,b);j++){
            if(a%j==0 && b%j==0){
                gd=j;
            }
        }
        new->info=gd;
        new->link=temp;
        save->link=new;
        save=temp;
        temp=temp->link;
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
    insertAtEnd(18);
    insertAtEnd(6);
    insertAtEnd(10);
    insertAtEnd(3);
    gcd();
    display();
}