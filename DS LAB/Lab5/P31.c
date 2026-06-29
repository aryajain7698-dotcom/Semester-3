#include<stdio.h>
void main(){
    int arr1[2][2],arr2[2][2];
    printf("Enter the elements of first array: \n");
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            scanf("%d",&arr1[i][j]);
        }
    }
    printf("Enter the elements of second array: \n");
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            scanf("%d",&arr2[i][j]);
        }
    }
    printf("The sum of the two arrays is: \n");
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            printf("%d ",arr1[i][j]+arr2[i][j]);
        }
        printf("\n");
    }
}