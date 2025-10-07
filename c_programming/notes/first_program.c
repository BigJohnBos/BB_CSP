// BB 7th first program

#include <stdio.h>

int main(void){
    char name[20];
    printf("what is your name\n");
    fgets(name, sizeof(name), stdin);
    printf("Hello %s, welcome to c", name);
}