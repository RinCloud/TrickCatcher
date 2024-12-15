#taking input from user and storing the value of A and B
A, B = map(int, input().split())

#initializing a variable to store the lowest price before tax
lowest_price = -1

#iterating from 1 to 10000 to find the lowest price before tax that satisfies the condition
for price in range(1, 10001):
    tax_8_percent = int(price * 0.08) # calculating the amount of tax with 8% rate
    tax_10_percent = int(price * 0.1) # calculating the amount of tax with 10% rate
    
    if tax_8_percent == A and tax_10_percent == B: # check if the calculated taxes match the given values A and B
        lowest_price = price # update the lowest_price
        break # stop the loop if the condition is satisfied

#printing the lowest price before tax
print(lowest_price)