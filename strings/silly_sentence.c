//Malu Estevam, Template
#include <stdio.h>

char name[50];
char verb[50]; 
char place[50];
char verb2[50];


int main(void){
    printf("Welcome to my silly sentences game. Follow the instructions below.\n");
    
    printf("Please give me someone's name\n");
    scanf("%s", name);
    printf("Please give me a verb, past tense\n");
    scanf("%s", verb);
    printf("Please give me a place, only one word\n");
    scanf("%s", place);
    printf("Please give me another verb, past tense\n");
    scanf("%s", verb2);

    printf("After %s %s to %s everyday to meet her secret lover, her mom found out and %s her.", name, verb, place, verb2);

    return 0;
}