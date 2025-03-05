//Malu Estevam, FizzBuzz C
#include <stdio.h>

int x;

int main(void){
    for(x=0;x<51;x++){
        if (x % 3 == 0 && x % 5 == 0){
            printf("fizzbuzz\n");

        }
        else if (x % 3 == 0){
            printf("fizz\n");

        }
        else if (x % 5 ==0){
            printf("buzz\n");

        }else{
            printf("%d\n", x);
        }
    }
    return 0;
}