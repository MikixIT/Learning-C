#include <stdio.h>


int increment(int x){
    x = x + 1;
    return x;
}

int main(void){
    //the way for making work output 11
    // in "C" everything is a copy
    // we need pointer in "C" in next lesson
    int y = 10;
    y = increment(y);

    //doesn't work output still 10
    // int y = 10;
    // increment(y);
    printf("Hi! %d\n", y);
    return 0;
}