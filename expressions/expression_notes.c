//Malu Estevam, Expressions Notes C
#include <stdio.h>
#include <math.h> //this is what lets us do exponents
// integers have int when we set the variable and %d when we print
// floats have float when we set and have %f when we print
// strings (words) have char when we set the variable and %s when we print
int mynum;
float percent;
int add = 4+6;
int sub = 4-6;
int mul = 4*6;
float div = 6/4;
int mod = 6%4;
int ex = pow(5, 2);


int main(void){

    //printf("type a number: \n");
    //scanf("%d", &mynum);
    //printf("You inputed %d\n", mynum);
    //printf("Give me a percent as a decimal: \n");
    //scanf("%f", &percent);
    //printf("Your percent is %f\n", percent);
    
    printf("%d\n", add);
    printf("%d\n", sub);
    mul = 7*4; // reassigning a variable has to be inside main
    printf("%d\n", mul);
    printf("%.2f\n", div); // number after percent tells computer how many points we want afterwards
    printf("%d\n", mod);
    printf("%d\n", ex);
    return 0;
}