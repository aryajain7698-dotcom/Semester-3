#include<stdio.h>
#include<string.h>
void main(){
    char ch[10];
    printf("Enter a character: ");
    scanf("%s",ch);
    for(int i=0;i<strlen(ch);i++){
        if(ch[i]>='a' && ch[i]<='z'){
            ch[i]=ch[i]-32;
        }
        else if(ch[i]>='A' && ch[i]<='Z'){
            ch[i]=ch[i]+32;
        }
    }
    printf("The modified character is: %s",ch);
}