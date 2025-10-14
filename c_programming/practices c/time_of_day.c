// BB 7th time of day
#include <stdio.h>

int main(void){

    int time;
    printf("Put the hour in military time\n");
    scanf("%d", &time);
    if(time >= 18){
        printf("Good evening\n");
    }else if(time >= 12){
        printf("Good afternoon\n");
    
    }else{
        printf("Good morning\n");
    }

    return 0;
}