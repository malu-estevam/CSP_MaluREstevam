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
    scanf("%f\n", income);
    
    printf("%s\n", "How much do you spend?");
    scanf("%f\n", spend);

    printf("%s\n", "What is your rent amount?");
    scanf("%f\n", rent);

    printf("%s\n", "What is the cost of your utilities?");
    scanf("%f\n", utilities);

    printf("%s\n", "What is the cost of your groceries?");
    scanf("%f\n", groceries);

    printf("%s\n", "What is the cost of your transportation?");
    scanf("%f\n", transportation);



    return 0;
}