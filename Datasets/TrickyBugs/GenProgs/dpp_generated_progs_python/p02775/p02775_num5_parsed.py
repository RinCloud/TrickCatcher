N = int(input())

#Calculate the maximum value of banknote
k = len(str(N))
max_banknote = 10**k + 1 - 1

# Initialize the counter variable
banknotes_used = 0

remaining_amount = N

# Loop through the possible values of banknote
while remaining_amount >= max_banknote:
    # Calculate the maximum number of banknotes that can be used
    max_banknotes_used = remaining_amount // max_banknote
    
    # Subtract the corresponding amount from the remaining amount
    remaining_amount -= max_banknotes_used * max_banknote
    
    # Update the counter variable
    banknotes_used += max_banknotes_used
    
    # Update the maximum value of banknote
    max_banknote = int(str(max_banknote)[:-1])

print(banknotes_used + remaining_amount)
