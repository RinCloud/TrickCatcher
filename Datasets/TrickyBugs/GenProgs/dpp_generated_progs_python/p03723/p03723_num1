# Getting input from user
A, B, C = map(int, input().split())

# Function to check if a number is odd or even
def is_odd(num):
    if num % 2 == 1:
        return True
    else:
        return False

# Function to perform the cookie exchange
def exchange_cookies(a, b, c):
    count = 0
    while True:
        # Checking if any person has odd number of cookies
        if is_odd(a) or is_odd(b) or is_odd(c):
            break
        
        # Dividing cookies and giving one half to each of the other two persons
        a, b, c = (b + c) // 2, (a + c) // 2, (a + b) // 2
        count += 1
        
    return count

# Checking if the action will be performed finite number of times
if is_odd(A) or is_odd(B) or is_odd(C):
    print(-1)
else:
    result = exchange_cookies(A, B, C)
    print(result)