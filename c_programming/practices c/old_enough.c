// BB t7h Old Enough

#include <stdio.h>

int main(void){
    int age;
    printf("What is your age: \n");
    scanf("%d", &age);

    if(age >= 18){
        printf("You are old enough to vote!");
    }else if(age >= 16){
        printf("You are old enough to get a driver's lisence!");
    }else if(age >= 15){
        printf("You are old enogh to get a learner's permit!");
    }else if(age >= 5){
        printf("Go to school!");
    }else{
        printf("Why are you even using this code? You are so young.");
    }


}