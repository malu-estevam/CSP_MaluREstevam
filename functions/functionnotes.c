//Malu Estevam, Template
#include <stdio.h>

// void add(){ // void is for no data type, when you don't want to return

// }

void add(int numOne, int numTwo){
    printf("%d\n", numOne + numTwo);

}
char input(char type[20]){
    char answer[50];
    printf("Please give me a %s:\n",
    type);
    scanf("%s", answer);
    return answer;
}


// int add(void){
    // printf("%d", 6+8);
    // return 0;
// }

int main(void){
    // printf("Hello World\n");
    // add(4, 9);
    // add(47, 9);
    // add(82, 3);
    input("name");
    input("verb");
    input("place");
    printf("%s was %s until they somehow reached %s", input("name"),  input("verb"), input("place"));
    return 0;
}