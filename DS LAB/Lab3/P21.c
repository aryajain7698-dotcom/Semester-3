#include<stdio.h>
void main(){
    int n;
    printf("Enter the number:");
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        printf("Enter the element:");
        scanf("%d",&arr[i]);
    }
    int a,b;
    printf("Enter the replacing value and the new value:");
    scanf("%d %d",&a,&b);
    int c;
    for(int i=0;i<n;i++){
        if(arr[i]==a){
            arr[i]=b;
            c=i;
        }
    }
    printf("THe index at which the replacement is done is: %d",c);
    printf("Array after replacement:");
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
}