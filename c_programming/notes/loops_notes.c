#include <stdio.h>

int main(void){

    int nums[] = {1,24,3452,542,62,6,7654};
    char candies[][60] = {"kitkat", "Skittles", "Nerds", "Hersheys", "Reese's"};

    for(int x = 0; x < 7; x++){
        printf("%d\n", nums[x]);
    }

    for(int i = 0; i < 5; i++){
        printf("%s, is my favorite candy\n", candies[i]);
    }
    for(int num = 1; num > 11; num++){
        printf("%d\n", num);
    }

    int num = 0;

    while(num <11){
        printf("%d\n", num);
        num++;
    }
    return 0;
}