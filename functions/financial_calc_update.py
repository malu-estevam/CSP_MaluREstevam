# Malu Estevam, Financial Calculator Updated Python

def info(income, amount, type):
    type_percent = (amount/income)*100
    print(f"You spend ${amount:.2f} on {type} and that is {type_percent:.2f}% of your income")

def user(type):
    return float(input(f"What is the cost of your {type}\n"))
    
# write a print statement telling the user what the program is (budget calculator)
print("Welcome to your financial calculator. Follow the instructions below")
# Ask for monthly income (user input) 
income = user("income")
# Ask for rent amount (user input) 
rent = user("rent")
# Ask for utilities amount (user input) 
utilities = user("utilities")
# Ask for groceries amount (user input) 
groceries = user("groceries")
# Ask for transportation amount (user input)
transportation = user("transportation")
# Calculate savings as 10% of income (variable)
savings = float(income/10)
# Calculate spending money income - (rent+utilities+groceries+transportation+savings)*100 (variable)
spend = (income - (rent+utilities+groceries+transportation+savings))
spend_percent = spend/income*100


info(income, rent, "rent")
info(income, utilities, "utilities")
info(income, groceries, "groceries")
info(income, transportation, "transportation")
print(f"You should save ${savings:.2f} and that is 10% of your income")
print(f"You have ${spend:.2f} left to spend and that is {spend_percent:.2f}% of your income.")