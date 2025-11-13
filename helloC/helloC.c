//
// Created by Michael Torres on 13.11.25.
//

//first we give the directives, which are preprocessors that the compiler reads
//C obviously reads all directives before executing the code
//
#include <stdio.h> // standard I/O (input/output)


//int declares that this function will return an integer
//in C we must define which type of value we expect beforehand

//with (void) we explicitly say that the function has no parameters
int main(void) {
    printf("Hello!\n");
    printf("I'm Michael,\n");
    printf("Nice to meet you!\n");
    return 0;

    //we return 0 by convention because the function is expected to return an int
}




