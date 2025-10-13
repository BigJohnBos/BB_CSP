// BB 7th Fizz Buzz

#include <stdio.h>

int main(void){
    int x = 1;
    while(x < 51){
        
        if(x % 3 == 0 && x % 5 == 0){
            printf("FizzBuzz\n");
        }
        else if(x % 3 == 0){
            printf("Fizz\n");
        }
        else if(x % 5 == 0){
            printf("Buzz\n");
        }
        else{
            printf("%d\n", x);
        }
        x++;
    }
}