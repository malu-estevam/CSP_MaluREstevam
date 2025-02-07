# Malu Estevam, Financial Calculator Python

# write a print statement telling the user what the program is (budget calculator)
print("Welcome to your very own financial calculator. Follow the instructions below")
# Ask for monthly income (user input) 
income = float(input("What is your monthly income\n"))
# Ask for spending amount
spend = float(input("How much do you spend\n"))
# Ask for rent amount (user input) 
rent = float(input("What is your rent amount\n"))
# Ask for utilities amount (user input) 
utilities = float(input("What is the cost of your utilities\n"))
# Ask for groceries amount (user input) 
groceries = float(input("What is the cost of your groceries\n"))
# Ask for transportation amount (user input)
transportation = float(input("What is the cost of your transportation\n"))
# Calculate savings as 10% of income (variable)
savings = float(income/10)*0.1
# Calculate spending money income - (rent+utilities+groceries+transportation+savings)*100 (variable)
spend_percent = (income - (rent+utilities+groceries+transportation+savings))*100
# Calculate percent of rent (rent/income)*100 (variable)
rent_percent = (rent/income)*100
# Calculate percent of utilities (utilities/income)*100 (variable)
utilities_percent = (utilities/income)*100
# Calculate percent of groceries (groceries/income)*100 (variable)
groceries_percent = (groceries/income)*100
# Calculate percent of transportation (transportation/income)*100 (variable)
transportation_percent = (transportation/income)*100
# Calculate percent of spending (spending/income)*100 (variable)
spend_percent = (spend/income)*100
# Tell user category spending amount and percent for rent ("You spend $XX.XX on rent and that is XX% of your income")
print(f"You spend ${rent:.2f} on rent and that is {rent_percent:.2f}% of your income")
# Tell user category spending amount and percent for utilities ("You spend $XX.XX on utilities and that is XX% of your income")
print(f"You spend ${utilities:.2f} on utilities and that is {utilities_percent:.2f}% of your income")
# Tell user category spending amount and percent for groceries ("You spend $XX.XX on groceries and that is XX% of your income")
print(f"You spend ${groceries:.2f} on groceries and that is {groceries_percent:.2f}% of your income")
# Tell user category spending amount and percent for transportation ("You spend $XX.XX on transportation and that is XX% of your income")
print(f"You spend ${transportation:.2f} on transportation and that is {transportation_percent:.2f}% of your income")
# Tell user category spending amount and percent for spending ("You spend $XX.XX on spending and that is XX% of your income")
print(f"You spend ${spend:.2f} on spending and that is {spend_percent:.2f}% of your income")
# Tell user category spending amount and percent for savings ("You spend $XX.XX on savings and that is 10% of your income")
print(f"You spend ${savings:.2f} on utilities and that is 10% of your income")