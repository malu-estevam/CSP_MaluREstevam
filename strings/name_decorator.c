//Malu Estevam, Name Decorator C
#include <stdio.h>

char name[45];

int main(void){
    printf("Please tell me your full name\n");
    scanf("%s", name);

    char one[] = "====";
    char two[] = "====";
    
    
    strcat(one, name);
    printf("%s\n", one);
    strcat(name, two);
    printf("%s\n", name);



    return 0;
}