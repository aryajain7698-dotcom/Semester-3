#include<stdio.h>
void main(){
    int n;
    int a;
    printf("Enter the number:");
    scanf("%d",&n);
    int sum=0;
    while(n>0){
        a=n%10;
        n=n/10;
        sum=sum*10+a;
    }
    printf("%d",sum);
}