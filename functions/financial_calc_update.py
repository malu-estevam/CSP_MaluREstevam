# Malu Estevam, Financial Calculator Updated Python

def info(income, amount, type):
    type_percent = (amount/income)*100
    print(f"You spend ${amount:.2f} on {type} and that is {type_percent:.0f}% of your income")


# write a print statement telling the user what the program is (budget calculator)
print("Welcome to your financial calculator. Follow the instructions below")
# Ask for monthly income (user input) 
income = float(input("What is your monthly income\n"))
# Ask for rent amount (user input) 
rent = float(input("What is your monthly rent\n"))
# Ask for utilities amount (user input) 
utilities = float(input("What is the cost of your utilities\n"))
# Ask for groceries amount (user input) 
groceries = float(input("What is the cost of your groceries\n"))
# Ask for transportation amount (user input)
transportation = float(input("What is the cost of your transportation\n"))
# Calculate savings as 10% of income (variable)
savings = float(income/10)
# Calculate spending money income - (rent+utilities+groceries+transportation+savings)*100 (variable)
spend = (income - (rent+utilities+groceries+transportation+savings))

info(income, rent, "rent")
info(income, utilities, "utilities")
info(income, groceries, "groceries")
info(income, transportation, "transportation")
