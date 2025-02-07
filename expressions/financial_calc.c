//Malu Estevam, Financial Calculator C
#include <stdio.h>
char welcome[] = "Welcome to your very own financial calculator. Follow the instructions below";
float income;

float spend;

float rent;

float utilities;

float groceries;

float transportation;

int main(void){
    printf("%s\n", welcome);

    printf("%s\n", "What is your monthly income?"); 
    scanf("%s\n", income);
    
    printf("%s\n", "How much do you spend?");
    scanf("%s\n", spend);

    printf("%s\n", "What is your rent amount?");
    scanf("%s\n", rent);

    printf("%s\n", "What is the cost of your utilities?");
    scanf("%s\n", utilities);

    printf("%s\n", "What is the cost of your groceries?");
    scanf("%s\n", groceries);

    printf("%s\n", "What is the cost of your transportation?");
    scanf("%s\n", transportation);

    return 0;
}