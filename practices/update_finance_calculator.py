# BB 7th update finance calculator

def money(expense):
    return float(input(f"what is your monthly {expense}"))

income = money("income")
rent = money("cost of rent")
utilities = money("cost of utilities")
groceries = money("cost of groceries")
transport = money("cost of transportation")
savings = round((income)*0.1, 2)

spending_money = round((income - rent - utilities - groceries - transport - savings), 2)

rent_percent = round((rent/income)*100, 2)
utilities_percent = round((utilities/income)*100, 2)
groceries_percent = round((groceries/income)*100, 2)
transport_percent = round((transport/income)*100, 2)

print(f"Your rent cost is ${rent} which is %{rent_percent} of your income")
print(f"Your utilities cost is ${utilities} which is %{utilities_percent} of your income")
print(f"Your groceries cost is ${groceries} which is %{groceries_percent} of your income")
print(f"Your transportation cost is ${transport} which is %{transport_percent} of your income")


print(f"you should put ${savings} in your savings acount which is %10 of your income")



print(f"Your spending money is ${spending_money}")

