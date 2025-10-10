// BB 7th Silly sentances
#include <stdio.h>
#include <string.h>

int main(void){
    char noun[20];
    char verb[20];
    char noun2[20];
    char animal[20];

    printf("Give me an animal\n");
    scanf("%s", animal);
    printf("Give me a noun\n");
    scanf("%s", noun);
    printf("Give me a noun\n");
    scanf("%s", noun2);
    printf("Give me a verb\n");
    scanf("%s", verb);
    printf("You wake up to the smell of a %s roasting over the %s, you %s down the stairs and find that your %s was tricking you.", animal, noun, verb, noun2);

}
