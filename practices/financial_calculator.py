# BB 7th Budget Calculator

income = float(input("what is your income:\n"))
rent = float(input("what is your rent cost:\n"))
utilities = float(input("what is the cost of your utilities:\n"))
groceries = float(input("how much did you spend on groceries?:\n"))
transport = float(input("how much do you spend on transportation?:\n"))

savings = income*0.1

spending_money = income - rent - utilities - groceries - transport - savings

print("Your spending money is $", spending_money)