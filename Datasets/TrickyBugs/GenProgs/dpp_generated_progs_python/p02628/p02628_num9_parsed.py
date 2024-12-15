# Approach:
To find the minimum possible total price of fruits, we need to select the cheapest K fruits out of N fruits.

We will sort the prices of fruits in ascending order and then sum the prices of first K fruits.

# Steps:
1. Read the values of N and K from input.
2. Read the prices of all the N fruits and store them in a list.
3. Sort the prices in ascending order.
4. Calculate the minimum possible total price by summing the prices of first K fruits.
5. Print the minimum possible total price.

# Program:

N, K = map(int, input().split())  # Read N and K values
prices = list(map(int, input().split()))  # Read the prices of N fruits

prices.sort()  # Sort the prices in ascending order

total_price = sum(prices[:K])  # Sum prices of first K fruits

print(total_price)