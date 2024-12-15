import math

def largest_perfect_power(X):
    largest_power = 1

    for b in range(1, X+1):
        for p in range(2, int(math.log2(X))+1):
            if b**p <= X:
                largest_power = max(largest_power, b**p)
            else:
                break
    
    return largest_power

X = int(input())
print(largest_perfect_power(X))