// BB 7th Financial Calculator

#include <stdio.h>


float monthly(char* chedder){
    float money;
    printf("What is your monthly %s?", chedder);
    scanf("%f", &money);
    return money;
}

float percent(float thing, float income){   
    return (thing/income)*100;
}


int main(void){

    float income, transport, groceries, rent, utilities;

    income = monthly("income");
    transport = monthly("transport");
    groceries = monthly("groceries");
    rent = monthly("rent");
    utilities = monthly("utilities");

    float savings = income*0.1;

    float spending_money = income - transport - groceries - rent - utilities - savings;
    float transport_percent = percent(transport, income);
    float groceries_percent= percent(groceries, income);
    float rent_percent = percent(rent, income);
    float utilities_percent = percent(utilities, income);

    printf("\nYou spent $%.2f on rent each month which is %.2f percent or your monthly income", rent, rent_percent);
    printf("\nYou spent $%.2f on rent each month which is %.2f percent or your monthly income", utilities, utilities_percent);
    printf("\nYou spent $%.2f on rent each month which is %.2f percent or your monthly income", groceries, groceries_percent);
    printf("\nYou spent $%.2f on rent each month which is %.2f percent or your monthly income", transport, transport_percent);
    printf("\nYou should put $%.2f in savings which is 10 percent of your monthly income", savings);
    printf("\nYou have $%.2f of spending money to use each month!\n\n", spending_money);


    return 0;



}