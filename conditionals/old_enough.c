// Malu Estevam, old enough C
#include <stdio.h>
#include <string.h>
int age[] = 20;


int main(void){
    if(age == 18){
        printf("You are old enough to vote");
    }
    if(age == 16){
        printf("You are old enough to drive");
    }
    if(age == 15){
        printf("You are old enough to get a learners permit");
    }
    if(age == 5){
        printf("You are old enough to go to school");
    }else{
        printf("You are too young to do anything")
    }
    return 0;
}