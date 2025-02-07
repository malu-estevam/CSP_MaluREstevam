//Malu Estevam, Financial Calculator C
#include <stdio.h>
char welcome[] = "Welcome to your very own financial calculator. Follow the instructions below";
float income;
float spend;
int main(void){
    printf("%s\n", welcome);
    printf("%s\n", "What is your monthly income?");
    scanf("%s\n", income);
    printf("%s\n", "How much do you spend?");
    scanf("%s\n", spend);
    return 0;
}