#include <stdio.h>
char name[20];

int main(void){
    printf("Please type in your name: \n");
    fgets(name, sizeof(name), stdin);

    printf("Hello, welcome to my C program");
    return 0;
}