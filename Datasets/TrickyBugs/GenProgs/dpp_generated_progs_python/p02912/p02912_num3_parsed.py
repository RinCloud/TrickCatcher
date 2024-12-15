import math

def min_amount_of_money(N, M, prices):
    # Sort the prices in ascending order
    prices.sort()
    
    # Initialize the total cost to 0
    total_cost = 0
    
    # Iterate through each price
    for price in prices:
        # Check if there are any discount tickets available
        if M > 0:
            # Calculate the maximum discount that can be applied
            max_discount = math.floor(math.log2(price))
            
            # Check if the number of discount tickets is greater than the maximum discount
            if M >= max_discount:
                # Update the total cost by applying the maximum discount
                total_cost += price // 2 ** max_discount
                # Reduce the number of discount tickets by the maximum discount
                M -= max_discount
            else:
                # Update the total cost by applying the number of discount tickets available
                total_cost += price // 2 ** M
                # Reduce the number of discount tickets to 0
                M = 0
        else:
            # No discount tickets available, add the price as it is
            total_cost += price
    
    return total_cost

# Read the input values
N, M = map(int, input().split())
prices = list(map(int, input().split()))

# Calculate and print the minimum amount of money required to buy all the items
print(min_amount_of_money(N, M, prices))