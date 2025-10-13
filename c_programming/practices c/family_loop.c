// BB 7th family loop

#include <stdio.h>

int main(void){
    char family[][20] = {"Mom", "Dad", "Daxton"};
    for(int i = 0; i < 5; i++){
        printf("%s", family[i]);
    }
}