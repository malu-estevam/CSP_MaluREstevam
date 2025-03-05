//Malu Estevam, Loop Notes C
#include <stdio.h>

int main(void){
// 1. What is a loop? 
    // a section of code that repeats

// 2. What are the two types of loops?
    // for loop
    int x;
    for(x=0;x<10;x++){
        printf("Hello\n");
    }
    // While loop
    int i=1;
    while(i<10){
        printf("%d\n", i);
        i++;
    }

// 3. What is iteration
    // The act of repeating
    // reference an iteration as a specific time through the loop

// 4. What are lists (arrays)? 
    // A bunch of values in one variable

// 5. How do you make lists (arrays) in C?
int grades[] = {97, 95, 100, 70, 94, 98, 64};
    // In brackets we say how long list will be
    // if list is set their brackets can be blank
    // data type is given as whatever is in the list (All list item must be same data type)
    // list is surrounded by curly brackets{} with commas , between each item
printf("%d\n", grades[3]); // to print one item, give index # in brackets
    // to change a variable:
grades [2] = 73; // update grades one at a time using index number
printf("%d\n", grades[2]);
    // How to get the size of an array:
int length = sizeof(grades)/sizeof(grades[0]);
printf("%d\n", length);
    
// 6. How do you make for loops in C?
    // iterators (letters) should be x or i
int t;
    // in parens 1. starting point 2. go until point 3. what we count by
    // t+= 2 if want to count by 2, t+= 3 if want to count by 3, etc
for(t=0;t<5;t++);{
    printf("%d\n", t);
}
int l;
for(l=0;l<length;l++){
    printf("%d\n", grades[l]);
}
// 7. How do you make while loops in C?
// use iterator to set start point
int iterator = 100;
// while line sets the stop point/ how long it goes
while(iterator >=0){
    printf("%d\n", iterator);
    // sets what I count by
    iterator -= 10;
}

char movies[][20] = {"Cinderella", "The Smurf Movie", "Transformers", "Cars", "Up", "1984"};
int mlength = sizeof(movies)/sizeof(movies[0]);
int m = 0;
while(m<mlength){
    printf("%s\n", movies[m]);
    m++;
}
    return 0;
}