#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct list{
    struct list *lptr;
    char sname[20];
    struct list *rptr;
};

struct list * first= NULL;

void insertAtEnd(char name[20]){
    struct list *new=(struct list *)malloc(sizeof(struct list));
    new->lptr=NULL;
    new->rptr=NULL;
    strcpy(new->sname,name);

    struct list *save=first;
    if(first==NULL){
        first=new;
    }else{
        while(save->rptr!=NULL){
            save=save->rptr;
        }
        save->rptr=new;
        new->lptr=save;
    }
}

void deleteAtKthPosition(int pos){
    int count=1;
    struct list* prev=NULL;
    struct list* save=first;
    struct list* next=save->rptr;
    while(save!=NULL){
    if(count==pos){
        if(prev==NULL){
            struct list *temp=save;
            save=save->rptr;
            first=save;
            free(temp);
            return;
        }else{
            prev->rptr=next;
            next->lptr=prev;
            free(save);
            return;
        }
    }else{
        prev=save;
        save=save->rptr;
        next=save->rptr;
        count++;
    }
}
}

struct list *play=NULL;

void previous(){
    if(play==NULL || play==first){
        printf("There is no previous song.\n");
    }else{
        play=play->lptr;
        printf("%s\n",play->sname);
    }
}

void next(){
    if(play==NULL){
        play=first;
        printf("%s\n",play->sname);
    }else{
        if(play->rptr==NULL){
            printf("There is no next song.");
        }else{
        play=play->rptr;
        printf("%s\n",play->sname);
        }
    }
}

void display(){
    struct list *save=first;
    int i=1; 
    while(save!=NULL){
        printf("%d.",i);
        i++;
        printf("%s\n",save->sname);
        save=save->rptr;
    }
}

void main(){
    insertAtEnd("main");
    insertAtEnd("tera");
    insertAtEnd("tu");
    insertAtEnd("meri");
    insertAtEnd("dono");
    insertAtEnd("sabke");
    next();
    previous();
}