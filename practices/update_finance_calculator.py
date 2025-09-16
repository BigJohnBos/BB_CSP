# BB 7th update finance calculator

def money(expense):
    return float(input(f"what is your monthly {expense}"))

income = money("income")
rent = money("rent")
utilities = money("utilities")
groceries = money("groceries")
transport = money("transportation")
savings = income*0.1

spending_money = income - rent - utilities - groceries - transport - savings

print("Your spending money is $", spending_money)

