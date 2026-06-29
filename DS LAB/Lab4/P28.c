#include<stdio.h>
void main(){
    int n;
    printf("Enter the number of elements: ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the elements of the array:\n");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]==arr[j]){
                for(int k=j;k<n-1;k++){
                    arr[k]=arr[k+1];
                }
                n--;
                }
            }
        }
    printf("The array after removing duplicates is:\n");
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
}