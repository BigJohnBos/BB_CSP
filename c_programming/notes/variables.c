// BB 7th Variables Notes
#include <stdio.h>

int main(void){
    int grade; 
    const float pi = 3.14;
    double long_pi = 3.141596258;
    char letter_grade;
    char name[50];

    printf("what is your name:\n");
    fgets(name, sizeof(name), stdin);
    
    //User input
    printf("what is your grade percentage as a whole: ");
    scanf("%d", &grade);
    
    printf("what is your letter grade ");
    scanf(" %c", &letter_grade);

    printf("%s did it\n", name);
    printf("You have a %d, in the class. that is an %c\n", grade, letter_grade);

    return 0;
}