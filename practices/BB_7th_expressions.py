name = input("what is your name:\n")
print("hello", name)

apples = 12
friends = 5
print("each friend gets", apples/friends, "apples!")

don = 7
bob = 4
joe = 6
dan = 5

print("the average age equals", (don + bob + joe + dan)/4)

num_1 = int(input("Tell me a number:\n"))
num_2 = float(input("Tell me another number:\n"))
num_1 += num_2

print("addition(+)", num_1)
num_1 -= num_2
print("subtraction(-)", num_1)
num_1 *= num_2
print("multiplication(*)", num_1)
num_1 /= num_2
print("division(/)", round(num_1, 2))
num_1 **= num_2
print("exponents(**)", num_1)
num_1 //= num_2
print("intiger division(//)", num_1)
num_1 %= num_2
print("modulo(%)", num_1)