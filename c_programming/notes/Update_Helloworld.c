// BB 7th first program

#include <stdio.h>


void greet(char* name){
    printf("Hello %s\n", name);
}


int main(void){
    greet("Bob");
    greet("Joe");
    greet("Jim");
    greet("Jeff");
    greet("Bill");
}