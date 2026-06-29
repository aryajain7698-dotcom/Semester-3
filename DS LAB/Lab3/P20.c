#include<stdio.h>
void main(){
    int n;
    printf("Enter the number of elements:");
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        printf("Enter the element:");
        scanf("%d",&arr[i]);
    }
    int dup=0;
    int a;
    printf("Number to check for duplicate elements:");
    scanf("%d",&a);
    for(int i=0;i<n;i++){
        if(arr[i]==a){
            dup++;
            break;
        }
    }
    if(dup==1){
        printf("Duplicate element found");
    }
    else{
        printf("Duplicate element not found");
    }
}