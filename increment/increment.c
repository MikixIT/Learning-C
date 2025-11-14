#include <stdio.h>

//define function no take value/parameters
//no return that's why "void"
void increment(void){
    int y = 1;
    int x = 2;
    y = y + 1;

    printf("%d\n", y);
}

int main(void){
    printf("Hi!\n");
    increment(); //call function
}
