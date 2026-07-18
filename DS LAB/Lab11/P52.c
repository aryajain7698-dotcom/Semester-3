#include<stdio.h>
#include<stdlib.h>

struct node
{
    int info;
    struct node *link;
};

struct node *first=NULL;
struct node *first2=NULL;
struct node *last=NULL;
struct node *last2=NULL;

int n=0;
void insertAtLast(int x){
    struct node *new=(struct node*)malloc(sizeof(struct node));
    new->info=x;
    new->link=NULL;
    if(first==NULL){
        first=new;
        last=first;
        last->link=first;
    }else{
        last->link=new;
        new->link=first;
        last=new;
    }
    n++;
}

int half(){
    if(n%2==0){
        n/=2;
    }else{
        n=(n/2)+1;
    }
}

void split(){
    struct node *save=first;
    int m=half();
    for(int i=1;i<m;i++){
        save=save->link;
    }
    first2=save->link;
    last2=last;
    last=save;
    last->link=first;
    last2->link=first2;
}

void display(){
    struct node *save=first;
    while(save!=last){
        printf("%d ",save->info);
        save=save->link;
    }
    printf("%d\n",last->info);
}

void display2(){
    struct node *save=first2;
    while(save!=last2){
        printf("%d ",save->info);
        save=save->link;
    }
    printf("%d",last2->info);
}

void main(){
    insertAtLast(1);
    insertAtLast(2);
    insertAtLast(3);
    insertAtLast(4);
    insertAtLast(5);
    insertAtLast(6);
    split();
    display();
    display2();
}