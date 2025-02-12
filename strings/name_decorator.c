//Malu Estevam, Name Decorator C
#include <stdio.h>
#include <string.h>

char name[45];


int main(void){
    printf("Please tell me your full name\n");
    fgets(name, 45, stdin);
    name[strcspn(name, "\n")] = 0;
    
    printf("<<< %s >>>\n", name);
    return 0;
}