//
// Created by Michael Torres on 13.11.25.
//

#include <stdio.h>

// This function must be defined at the top level.
// C does not allow defining a function inside another function.
// Every function must be declared or defined before it is used.
int sum4sum (int a, int b){
        return a + b;
}
// main calls sum4sum below.
// The function is already defined above, so the compiler knows it.
int main(void) {
    printf("sum4sum is %d\n", sum4sum(20,60));
    return 0;
}
