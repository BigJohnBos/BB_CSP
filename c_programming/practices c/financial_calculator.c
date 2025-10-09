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

    float savings = income*0.1;

    float spending_money = income - transport - groceries - rent - utilities - savings;
    float rent_percent = (rent/income)*100;
    float utilities_percent = (utilities/income)*100;
    float groceries_percent = (groceries/income)*100;
    float transport_percent = (transport/income)*100;

    printf("\nYou spent $%.2f on rent each month which is %.2f percent or your monthly income", rent, rent_percent);
    printf("\nYou spent $%.2f on rent each month which is %.2f percent or your monthly income", utilities, utilities_percent);
    printf("\nYou spent $%.2f on rent each month which is %.2f percent or your monthly income", groceries, groceries_percent);
    printf("\nYou spent $%.2f on rent each month which is %.2f percent or your monthly income", transport, transport_percent);
    printf("\nYou should put $%.2f in savings which is 10 percent of your monthly income", savings);
    printf("\nYou have $%.2f of spending money to use each month!\n\n", spending_money);


    return 0;



}