#include<stdio.h>
#include<math.h>
void main(){
    float sum=0;
    int n,a,b,ans,temp;
    for(int i=1;i<=1000;i++){
        ans=i;
        n=i;
        sum=0;
        b=0;
        temp=i;
        while(temp!=0){
            temp/=10;
            b++;
        }
        while(n!=0){
            a=n%10;
            n/=10;
            sum=sum+(pow(a,b));
        }
        
        if((int)(sum)==ans){
            printf("%d ",ans);
        }
    }
}