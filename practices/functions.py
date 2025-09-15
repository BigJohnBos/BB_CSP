# BB 7th function notes
def welcome():
    name = input("what is your name")
    print(f"hello, {name}")

print("This is not in my function")
welcome()

def add(number, number_two):
    number += num_two
    print(number)

num_one = 23
num_two = -13

# add(80)

import random

def roll(mod):
    return random.randint(2, 20) + mod

strength = roll(0)
dexterity = roll(1)
intellegence = roll(1)
charisma = roll(0)
print(f"strength: {strength}\nDex: {roll(1)}\nInt: {roll(1)}\nchar: {roll(0)}")