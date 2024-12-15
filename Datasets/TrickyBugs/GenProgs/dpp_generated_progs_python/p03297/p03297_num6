# Plan:
- Snuke can buy juice indefinitely if the number of cans remaining in stock is always greater than or equal to B.
- We can iterate through the queries and check if Snuke can buy juice indefinitely by simulating the stock count.
- We start with the stock count equal to A, and for each day, we subtract B from the stock count and add D if the stock count is less than or equal to C.
- If at any point during the simulation the stock count is less than B, we know that Snuke cannot buy juice indefinitely.
- Otherwise, if the simulation completes without the stock count ever being less than B, we know that Snuke can buy juice indefinitely.

# Here is the python program that achieves the program intention:
T = int(input())
for _ in range(T):
    A, B, C, D = map(int, input().split())
    
    current_stock = A
    can_buy_indefinitely = True
    
    while current_stock > B:
        next_stock = (current_stock // B) * B
        if next_stock <= C:
            next_stock += D
        if next_stock <= current_stock:
            can_buy_indefinitely = False
            break
        current_stock = next_stock
    
    if can_buy_indefinitely:
        print("Yes")
    else:
        print("No")