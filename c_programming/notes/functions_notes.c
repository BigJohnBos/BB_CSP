// BB 7th Functions notes
#include <stdio.h>

void birthday(char* name, int age){
    printf("Happy Birthday to you!\n");
    printf("Happy Birthday to you!\n");
    printf("Happy Birthday dear %s!\n", name);
    printf("Happy Birthday to you!\n");
    printf("Happy Birthday %s you are %d\n", name, age);
}

int mul(int x, int y){
    return x*y;
}
float get_number(char* type){
    float value;
    printf("how many %s do you have: ", type);
    scanf("%f", &value);
    return value;
}

int main(void){
    birthday("Jesus", 15);
    birthday("Gwen", 14);
    birthday("cesily", 16);
    int product = mul(8,5);
    printf("%d\n", product);
    printf("%d\n", mul(4,6));
    float pencils = get_number("pencils");
    float notebooks = get_number("notebooks");
    printf("you have %.2f pencils and %.2f Notebooks!", pencils, notebooks);







    return 0;
}