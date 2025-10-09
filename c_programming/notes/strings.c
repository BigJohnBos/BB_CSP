// BB 7th Strings notes
#include <stdio.h>
#include <string.h>

int main(void){
    char name[] = "Andrew";

    char last_name[25];
    printf("What is your last name:\n");
    scanf("%s", last_name);
    
    char full_name[50];
    strcat(full_name, name);
    printf("[%s]\n", full_name);
    strcat(full_name, " ");
    printf("[%s]\n", full_name);
    strcat(full_name, last_name);
    printf("[%s]\n", full_name);

    printf("%c\n", last_name[0]);
    last_name[0] = 'r';

    printf("your name is %s %s", name, last_name);
    printf("%zu\n", strlen(name));
    printf("%zu\n", sizeof(name));

    return 0;
}