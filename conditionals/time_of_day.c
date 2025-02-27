//Malu Estevam, Template
#include <stdio.h>
#include <time.h>




int main(void){
    time_t now = time(NULL);
    struct tm *tm_struct = localtime(&now);
    int hour = tm_struct->tm_hour;

    if(hour > 6 || hour <= 11){
        printf("Good morning!");
    }
    else if(hour > 11 || hour <= 16){
        printf("Good afternoon!");
    }
    else if(hour > 16 || hour<= 19){
        printf("Good evening!");
    }else{
        printf("Go to bed. It is late");
    }
    return 0;
}