#include<stdio.h>
void main(){
    int m,n;
    printf("Enter the size of first array: ");
    scanf("%d",&m);
    printf("Enter the size of second array: ");
    scanf("%d",&n);
    int a=m+n;
    int arr1[m];
    int arr2[n];
    int arr[a];
    printf("Enter the elements of first array:\n");
    for(int i=0;i<m;i++){
        scanf("%d",&arr1[i]);
    }
    printf("Enter the elements of second array:\n");
    for(int i=0;i<n;i++){
        scanf("%d",&arr2[i]);
    }
    for(int i=0;i<m;i++){
        arr[i]=arr1[i];
    }
    for(int i=m;i<a;i++){
        arr[i]=arr2[i-m];
    }
    printf("The merged array is:\n");
    for(int i=0;i<a;i++){
        printf("%d ",arr[i]);
    }

}