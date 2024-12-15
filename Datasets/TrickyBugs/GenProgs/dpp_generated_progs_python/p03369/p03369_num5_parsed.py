# Given the constraints, we can simply count the number of 'o' characters in the string `S` and add the corresponding toppings price to the base ramen price of 700 yen.

# Here's the complete program:

S = input()  # Read the input string

price = 700  # Base ramen price

# Count the number of toppings based on the 'o' characters
price += S.count('o') * 100  # Add the toppings price

print(price)  # Print the total price of the ramen