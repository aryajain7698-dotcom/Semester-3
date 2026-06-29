#include<stdio.h>
int main(){
    int n;
    printf("Enter the number of elements:");
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        printf("Enter the element:");
        scanf("%d",&arr[i]);
    }
    float sum=0;
    for(int i=0;i<n;i++){
        sum=sum+arr[i];
    }
    float avg=sum/n;
    printf("Average of the elements is: %.2f",avg);
}