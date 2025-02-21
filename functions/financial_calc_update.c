//Malu Estevam, Financial Calculator C
#include <stdio.h>
#include <math.h>

float income, rent, utilities, groceries, transportation, spend, savings;

float user(char type[]){
    float amount; 
    printf("What is your %s amount?\n", type); 
    scanf("%f", &amount);
    return amount;
}

void info(float income, float amount){
    float percent = (amount/income)*100;
    printf("You spend $%.2f on rent which is %.2f%% your income\n", amount, percent);

}
int main(void){
    printf("Welcome to your very own financial calculator. Follow the instructions below\n");

    income = user("income");

    rent = user("rent");

    utilities = user("utilities");

    groceries = user("groceries");

    transportation = user("transportation");

    float savings = income/10;
    float spend = income - (rent+utilities+groceries+transportation+savings);
    float spend_percent = spend/income*100;


    info(income, rent);
    info(income, utilities);
    info(income, groceries);
    info(income, transportation);
    printf("You have $%.2f for savings which is 10%% of your income\n", savings);
    printf("You have $%.2f left for spending which is %.2f%% of your income\n", spend, spend_percent);

    return 0;
}