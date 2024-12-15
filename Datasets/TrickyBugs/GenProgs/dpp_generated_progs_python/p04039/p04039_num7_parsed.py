# 1. Take input values for N and K
# 2. Take input values for D_1, D_2, ..., D_K
# 3. Initialize a variable `amount` with N
# 4. Check if `amount` contains any disliked digits
#     - If yes, increment `amount` by 1 and repeat the check
#     - If no, break the loop
# 5. Print the final `amount`

N, K = map(int, input().split())
disliked_digits = list(map(int, input().split()))

amount = N

while True:
    for digit in str(amount):
        if int(digit) in disliked_digits:
            amount += 1
            break
    else:
        break

print(amount)