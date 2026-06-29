#include<stdio.h>
int main(){
    int a,b,c;
    printf("Enter the number: ");
    scanf("%d", &a);
    printf("Enter the number: ");
    scanf("%d", &b);
    printf("Enter the number: ");
    scanf("%d", &c);
    a>b?a>c?printf("%d is the greatest",a):printf("%d is the greatest",c):b>c?printf("%d is the greatest",b):printf("%d is the greatest",c);
    return 0;
}