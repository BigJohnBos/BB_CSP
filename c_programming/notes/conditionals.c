// BB 7th Conditionals c

#include <stdio.h>
#include <string.h>

int main(void){
    int grade;
    char name[50];
    printf("What is your grade percent");
    scanf("%d", &grade);

     printf("What is your name");
    scanf("%s", &name);

        //printf("%d\n",strcmp(name, "Ms.LaRose"));
    if(strcmp(name, "Ms.LaRose") == 0){
        printf("You dont have a grade");
    }else if(grade >= 90){
        printf("you have an A\n");
    }else if(grade >= 80){
        printf("You have a B\n");
    }else if(grade >= 70){
        printf("You have a C\n");
    }else{
        printf("You are failing\n");
    }


}