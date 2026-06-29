#include<stdio.h>
void main(){
    int n;
      printf("Enter the number of rows:");
    scanf("%d",&n);
    for (int i = 0; i < n; i++) {
        for (int j= 1; j<= n - i; j++) {
            printf("  ");
        }
        int val = 1; 
        for (int j = 0; j <= i; j++) {
            
            printf("%4d", val);
            val = (val * (i - j)) / (j + 1);
        }
        printf("\n");
    }
    
}
