#include<stdio.h>
int main(){
    int day;
    printf("Enter the number of days:");
    scanf("%d",&day);
    int y=day/365;
    int m=(day%365)/30;
    int d=(day%365)%30;
    printf("%d year(s) %d month(s) %d day(s)",y,m,d);
    return 0;
}