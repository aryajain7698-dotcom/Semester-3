#include<stdio.h>
void main(){
    int n;
    printf("Enter the number of elements: ");
    scanf("%d",&n);
    int arr[n+1];
    printf("Enter the elements of the array:\n");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int pos;
    int element;
    printf("Enter the position of the element to be inserted: ");
    scanf("%d",&pos);
    printf("Enter the element to be inserted: ");
    scanf("%d",&element);
    for(int i=n;i>=pos-1;i--){
        arr[i]=arr[i-1];
    }
    arr[pos-1]=element;
    printf("The array after insertion is:\n");
    for(int i=0;i<n+1;i++){
        printf("%d ",arr[i]);
    }
}