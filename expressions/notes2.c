//Malu Estevam, Expressions Notes C
#include <stdio.h>
// integers have int when we set the variable and %d when we print
// floats have float when we set and have %f when we print
// strings (words) have char when we set the variable and %s when we print
int mynum;
float percent;

int main(void){

    printf("type a number: \n");
    scanf("%d", &mynum);
    printf("You inputed %d\n", mynum);
    printf("Give me a percent as a decimal: \n");
    scanf("%f", &percent);
    printf("Your percent is %f\n", percent);
    return 0;
}