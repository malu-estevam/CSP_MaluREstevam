//Malu Estevam, conditional notes C
#include <stdio.h>
#include <string.h>
char name[] = "Malu";
int num[] = 7;

int main(void){
    if(strcmp(name, "Malu") == 0){
        printf("Hello Malulu. Welcome to class\n");
    }else{
        printf("Hello %s, welcome to class!\n", name);
    }
// && = and
// || = or
// != = not

    if(num > 5 && num < 10){
        if(num == 7){
            printf("%d is an unlucky number\n", num);
        }else{
            printf("%d is a large single digit number\n", num);
        }
    }else if (num > 10){
        printf("%d is not a single digit number\n", num);
    }else{
        printf("%d is a small single digit number\n", num);
    }
    return 0;
}