#include<stdio.h>
void main(){
    int n;
    printf("Enter the number:");
    scanf("%d",&n);
    int sum=0;
    for(int i=1;i<=n;i++){
        sum=sum+((i*(i+1))/2);
    }
    printf("%d",sum);
}