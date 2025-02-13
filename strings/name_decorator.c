//Malu Estevam, Name Decorator C
#include <stdio.h>
#include <string.h>

char name[45];

int main(void){
    
    printf("Please tell me your name\n");
    scanf("%s", name);

    char one[] = "====";
    char two[] = "====";
    
    
    strcat(one, name);
    printf("%s", one);
    strcat(name, two);
    printf("%s", two);



    return 0;
}