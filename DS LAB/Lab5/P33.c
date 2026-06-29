#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>
void main(){
    int n;
    printf("Enter number of words: ");
    scanf("%d", &n);
    char words[n][50];
    printf("Enter the words: \n");
    for(int i=0;i<n;i++){
        scanf("%s", words[i]);
    }

    int random=rand()%n;
    printf("Random word: %s\n", words[random]);

    printf("Enter anagram word: ");
    char anagram[50];
    scanf("%s", anagram);

    for(int i=0;i<strlen(anagram);i++){
        anagram[i] = tolower(anagram[i]);
    }
    for(int i=0;i<strlen(words[random]);i++){
        words[random][i] = tolower(words[random][i]);
    }
    for(int i=0;i<strlen(anagram);i++){
        for(int j=0;j<strlen(anagram);j++){
            if(anagram[i]>anagram[j]){
                char temp = anagram[i];
                anagram[i] = anagram[j];
                anagram[j] = temp;
            }
        }
        for(int j=0;j<strlen(words[random]);j++){
            if(words[random][i]>words[random][j]){
                char temp = words[random][i];
                words[random][i] = words[random][j];
                words[random][j] = temp;
            }
        }
    }
    if(strcmp(anagram, words[random]) == 0){
        printf("Congratulations!");
        return;
    }else{
        printf("Not Found\n");
        return;
    }
}