#include<stdio.h>
int main(){
    int sec;
    printf("Enter the number of seconds:");
    scanf("%d",&sec);
    int h=sec/3600;
    int m=(sec%3600)/60;
    int s=(sec%3600)%60;
    printf("%d hour(s) %d minute(s) %d second(s)",h,m,s);
    return 0;
}