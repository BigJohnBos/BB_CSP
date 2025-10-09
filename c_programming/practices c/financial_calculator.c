// BB 7th Financial Calculator

#include <stdio.h>


int main(void){

    float income, transport, groceries, rent, utilities;



    printf("what is your monthly income?\n");
    scanf("%f", &income);
    printf("What is your monthly rent/morgage\n");
    scanf("%f", &rent);
    printf("What is your monthly cost of utilities\n");
    scanf("%f", &utilities);
    printf("How much do you spend on groceries each month\n");
    scanf("%f", &groceries);
    printf("How much do you spend on transportation each month\n");
    scanf("%f", &transport);

    float spending_money = income - transport - groceries - rent - utilities;
    float rent_percent = (rent/income)*100;
    float utilities_percent = (utilities/income)*100;
    float groceries_percent = (groceries/income)*100;
    float transport_percent = (transport/income)*100;






}