//Malu Estevam, Template
#include <stdio.h>




int main(void){
    printf("Please give me someone's name");
    scanf("%s\n", name);
    printf("Please give me a place");
    scanf("%s\n", place);
    printf("Please give me a food");
    scanf("%s\n", food);

    printf("%s is at %s eating %s, a five star dish", name, place, food);

    return 0;
}