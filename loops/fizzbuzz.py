# Malu Estevam, fizzbuzz Python
for x in range(1,51):
    if x % 3:
        print("fizz")
    if x % 5:
        print("buzz")
    if x % 3 and x % 5:
        print("fizzbuzz")
    else:
        print(x)
    