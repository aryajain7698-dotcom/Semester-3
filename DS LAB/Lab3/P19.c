#include<stdio.h>
void main(){
    int n;
    printf("Enter the number of elements:");
    scanf("%d",&n);
    int arr[n];
    int min=arr[0],max=arr[0];
    for(int i=0;i<n;i++){
        printf("Enter the element:");
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++){
        if(arr[i]<min){
            min=arr[i];
        }
        if(arr[i]>max){
            max=arr[i];
        }
    }
    printf("Min element is: %d",min);
    printf("Max element is: %d",max);

}