# BB 7th time of day

print("Please print in military time with no colin and 4 digits")
time = int(input("What time is it"))

if time >= 1800:
    print("Good evening")
elif time >= 1200:
    print("Good afternoon")
else:
    print("Good morning")