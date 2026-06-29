#include<stdio.h>
void main(){
    int arr1[3][2],arr2[3][2];
    printf("Enter the elements of first array: \n");
    for(int i=0;i<3;i++){
        for(int j=0;j<2;j++){
            scanf("%d",&arr1[i][j]);
        }
    }
    printf("Enter the elements of second array: \n");
    for(int i=0;i<3;i++){
        for(int j=0;j<2;j++){
            scanf("%d",&arr2[i][j]);
        }
    }
    printf("The multiplication of the two arrays is: \n");
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            int sum = 0;
            for(int k=0;k<2;k++){
                sum += arr1[i][k] * arr2[k][j];
            }
            printf("%d ",sum);
        }
        printf("\n");
    }
}