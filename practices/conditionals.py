# BB 7th conditionals

#homework_done = input("did you do your homework?").strip().capitolize()

#if homework_done == "no":
    #print("go do your homework")
#else:
    #print("Yes you can go")

grade = input("what is your grade percent")

if grade >= 90:
    print(f"you have {grade}% what is an A!")
elif grade >= 80:
    print(f"you have {grade}% that is a B")
else:
    print(f"you have a {grade}% that is a C or lower")
