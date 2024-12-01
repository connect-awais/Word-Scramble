#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<time.h>

void shuffle(char*word)
{
    int len=strlen(word);
    for(int i; i < len;i++)
    {
        int j=rand() % len;
        char temp = word[i];
        word[i]=word[j];
        word[j]=temp;
    }
}

int main()
{
    char word[]="computer";
    char scrambled[100];

    strcpy(scrambled, word);
    srand(time(0));
    shuffle(scrambled);

    printf("Welcome to word scramble!");
    printf("\nGuess the original word scrambled:%s",scrambled);

    char guess[100];
    while (1) 
    {
        printf("\nEnter your guess:");
        scanf("%s",&guess);

    if(strcmp(guess,word)==0)
    {
        printf("\nCongratulations!Win the game!");
        break;
    }

    else{
        printf("Incorrect! Please try again!"); 
          }
    }
          return 0;

}