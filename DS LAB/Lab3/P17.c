#include<stdio.h>
int main(){
    int m,n;
    int arr[6]={1,2,3,4,5,6};
    printf("Enter the start and end index:");
    scanf("%d %d",&m,&n);
    int sum=0;
    for(int i=m;i<=n;i++){
        sum=sum+arr[i];
    }
    printf("Sum of elements from index %d to %d is: %d",m,n,sum);
}