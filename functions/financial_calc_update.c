//Malu Estevam, Financial Calculator C
#include <stdio.h>
#include <math.h>
float income, rent, utilities, groceries, transportation, spend, savings;


int main(void){
    printf("Welcome to your very own financial calculator. Follow the instructions below\n");

    printf("What is your monthly income?\n"); 
    scanf("%f", &income);

    printf("What is your rent amount?\n");
    scanf("%f", &rent);

    printf("What is the cost of your utilities?\n");
    scanf("%f", &utilities);

    printf("What is the cost of your groceries?\n");
    scanf("%f", &groceries);

    printf("What is the cost of your transportation?\n");
    scanf("%f", &transportation);


    float savings = income/10;
    float rent_percent = (rent/income)*100;
    float utilities_percent = (utilities/income)*100;
    float groceries_percent = (groceries/income)*100;
    float transportation_percent = (transportation/income)*100;
    float spend = income - (rent+utilities+groceries+transportation+savings);
    float spend_percent = spend/income*100;
    

    printf("You spend $%.2f on rent which is %.2f%% your income\n", rent, rent_percent);
    printf("You spend $%.2f on utilities and that is %.2f%% your income\n", utilities, utilities_percent);
    printf("You spend $%.2f on groceries and that is %.2f%% your income\n", groceries, groceries_percent);
    printf("You spend $%.2f on transportation and that is %.2f%% your income\n", transportation, transportation_percent);
    printf("You have $%.2f for savings which is 10%% of your income\n", savings);
    printf("You have $%.2f left for spending which is %.2f%% of your income\n", spend, spend_percent);

    return 0;
}