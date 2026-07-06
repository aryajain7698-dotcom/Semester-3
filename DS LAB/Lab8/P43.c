#include <stdio.h>
#include <stdlib.h>
struct node {
    int info;
    struct node *link;
};
struct node *insertAtFirst1(int x1,struct node*first1){
    struct node*new=(struct node *)malloc(sizeof(struct node));
    new->info=x1;
    new->link=first1;
    first1=new;
    return first1;
}
struct node *insertAtFirst2(int x2,struct node*first2){
    struct node*new=(struct node *)malloc(sizeof(struct node));
    new->info=x2;
    new->link=first2;
    first2=new;
    return first2;
}
int compare(struct node*first1,struct node*first2){
    struct node *save1=first1;
    struct node *save2=first2;
    if(save1!=NULL && save2==NULL){
        printf("not same");
    }
    if(save2!=NULL && save1==NULL){
        printf("not same");
    }
    while(save1!=NULL && save2!=NULL){
        if(save1->info == save2->info){
            save1=save1->link;
            save2=save2->link;
        }else{
            return 0;
        }
    }
    return 1;
}
void main(){
    struct node *first1=NULL;
    struct node *first2=NULL;
    int a;
    while(1){
        printf("Enter 1.insertAtFirst1, 2.inserAtFirst2, 0.compare:");
        scanf("%d",&a);
        switch (a)
        {
        case 1:
        {
            printf("Enter the number:");
            int x1;
            scanf("%d",&x1);
            first1 = insertAtFirst1(x1,first1);
            break;
        }
        case 2:
        {
            printf("Enter the number:");
            int x2;
            scanf("%d",&x2);
            first2 = insertAtFirst2(x2,first2);
            break;
        }
        case 0:
        {
            if(compare(first1,first2)==0){
                printf("Not same.");
            }else{
                printf("Same.");
            }
            return;
        }
        }
    }
}