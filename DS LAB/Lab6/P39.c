#include<stdio.h>
#include<string.h>
void main(){
    char *str;
    char *revstr;
    str=(char *)malloc(100 * sizeof(char));
    revstr=(char *)malloc(100 * sizeof(char));
    printf("Enter a string: ");
    scanf("%s", str);
    strcpy(revstr, str);
    strrev(revstr);
    if(strcmp(str, revstr)==0){
        printf("The string is a palindrome.\n");
    } else {
        printf("The string is not a palindrome.\n");
    }
    free(str);
    free(revstr);
}