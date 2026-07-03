#include<stdio.h>
#include<stdlib.h>
struct node {
    int info;
    struct node *link;
};
void main(){
    struct node *first;
    first=(struct node *)malloc(sizeof(struct node));
    if(first==NULL){
        printf("The list is empty");
    }
    printf("Enter the number:");
    scanf("%d",&first->info);
    first->link=NULL;

    printf("Node data:%d",first->info);

    free(first);
}
