//Malu Estevam, My Family Loop C
#include <stdio.h>
char siblings [3][20] = {"Malu", "Mili", "Maeh"};
int i;


int main(void){
    for(i=0;i<3;i++){
        printf("Hey my favorite sibling, %s\n", siblings[i]);
    }
    return 0;
}