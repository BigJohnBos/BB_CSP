# BB 7th conditionals

#homework_done = input("did you do your homework?").strip().capitolize()

#if homework_done == "no":
    #print("go do your homework")
#else:
    #print("Yes you can go")

grade =  int(input("What ")) 

if grade >= 90 and not grade > 100:
    print(f"you have {grade}% what is an A!")
elif grade >= 80:
    print(f"you have {grade}% that is a B")
else:
    print(f"you have a {grade}% that is a C or lower")

name = input("what is your name: ").strip().capitalize()

if name == "Larose":
    print("You are the teacher")
elif name == "Tia" or name == "Ashley":
    print("You are TA")
else:
    print(f"Hello {name}, you are student")