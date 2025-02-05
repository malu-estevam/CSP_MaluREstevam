// Malu Estevam, C program
#include <stdio.h>


int main(void){
    char name[50];
    printf("What is your name?");
    scanf("%s\n", name);
    printf("Welcome to my program, %s\n", name);
    return 0;
}