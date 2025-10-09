// BB 7th Name Decorator

#include <stdio.h>
#include <string.h>

int main(void){
    char name[20];
    char decorated_name[30] = "###";
    char name_decor[20] = "@bobduface";
    printf("What is your first name\n");
    scanf("%s", name);
    strcat(decorated_name, name);
    strcat(decorated_name, name_decor);
    printf("%s", decorated_name);

}