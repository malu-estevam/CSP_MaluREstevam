# Malu Estevam, Function notes in Python

# A function is an action stored in a keyword

# number = int(input("Can I get a number?:\n")) # How to make parameter while also keeping user input
# def add(numOne, numTwo): 
    # print(numOne+numTwo)

# add(int(input("tell me a number\n")), number)

# def add():
    # numOne = int(input("Give me a number:\n"))
    # numTwo = int(input("Give me a number:\n"))
    # print(numOne+numTwo)

# add()

# def add(numOne, numTwo): # Parameters go in the parentheses separated by commas
    # print(numOne+numTwo)

# add(12, 20) # Arguments are given when the function is called AND must match the number of parameters

def user(word): 
    return input(f"Tell me a {word}:\n")

name = user("name")
verb = user("verb")
place = user("place")
print(f"{name} was {verb} and somehow got to {place}.")