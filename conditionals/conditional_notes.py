# Malu Estevam, conditional notes

num = 6

if num >  5 and num < 10: # nested condition: not advised to nest past two
    if num == 7:
        print(f"{num} is an unluck number")
    else:
        print(f"{num} is a large single digit number")
else:
    print(f"This is {num}")