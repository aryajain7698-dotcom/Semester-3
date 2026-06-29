#include<stdio.h>
int fact1(int n);
int fact2(int n);
int main(){
    int n;
    printf("Enter the number:");
    scanf("%d",&n);
    if(n==0 || n==1){
        printf("THe factorial of %d is 1",n);
    }else{
        printf("The factorial of %d is %d\n",n,fact1(n));
        printf("The factorial of %d is %d",n,fact2(n));
    }
}
int fact1(int n){
    int mul=1;
    for(int i=2;i<=n;i++){
        mul=mul*i;
    }
    return mul;
}
int fact2(int n){
    if(n==0 || n==1){
        return 1;
    }
    return n*fact2(n-1);
}