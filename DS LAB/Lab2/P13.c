#include<stdio.h>
void main(){
    int a,b;
    printf("Enter the start,end:");
    scanf("%d %d",&a,&b);
    int count=0;
    for(int i=a;i<=b;i++){
        count=0;
        for(int j=2;j<i;j++){
        if(i%j==0){
            count++;
        }
    }
    if(count==0){
        printf("%d,",i);
    }
    }
    
}