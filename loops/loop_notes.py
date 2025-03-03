# Malu Estevam, Loop notes Py

# 1. What is a loop? 
    # A section of code that is going to repeat

# 2. What are the two types of loops?
    # While loop- use when we don't know when our loop is supposed to end
x = 0
while x < 10:
    print("Hello", x)
    x += 1
    # For loop
nums = [3,5,7,9,2]
for num in nums:
    print(num)
# 3. What is iteration
    # The act of repeating something

# 4. What are lists? 
    # A bunch of values in the same variable
    # Have brackets around them, each item is seperated by comma, quotations around strings
siblings = ["Malu", "Mili", "Maeh"]
    # print one item from the list
print(siblings[0]) # index number in brackets START AT 0
    # change an item in a list
siblings[1] = "Milena"
    #removing an item from list
siblings.pop(2)

print(siblings)

# 5. How do you make lists in python? 
    # [] around list , between each item in list
    # list items must by proper data types

# 6. How do you make for loops in python? 
    # Always call plural version
num = 1
for sibling in siblings:
    print(f"{num}. {sibling} Estevam")
    num += 1
# using range instead of a list
for num in range(1, 11, 2):
    print(num)
# 7.How do you make while loops in python?
import random

num = 1 
rand = random.randint(1,20)

while num < 21:
    if num == rand:
        print(f"Goose!")
        break # tells loop to be done
    else:
        print("Duck")
    
    num += 1

# continue tells loop to stop that particular round of loop and start again
