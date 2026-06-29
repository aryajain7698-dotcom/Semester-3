#include<stdio.h>
int main(){
    int n;
    int a;
    printf("Enter the number:");
    scanf("%d",&n);
    printf("Enter the power:");
    scanf("%d",&a);
    int mul=1;
    for(int i=0;i<a;i++){
        mul=mul*n;
    }
    printf("The answer of number %d with power %d is %d",n,a,mul);
}