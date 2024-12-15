import math

def is_prime(n):
    if n <= 1:
        return False
    for i in range(2, int(math.sqrt(n))+1):
        if n % i == 0:
            return False
    return True

def min_operations(N, cards):
    operations = 0
    face_up = [False] * (cards[-1]+1)
    for card in cards:
        face_up[card] = True
    
    while any(face_up):
        next_prime = 0
        for i in range(2, len(face_up)):
            if is_prime(i) and not face_up[i]:
                next_prime = i
                break
        
        for i in range(next_prime, len(face_up)):
            if face_up[i]:
                face_up[i] = False
            else:
                face_up[i] = True
        operations += 1
    
    return operations


# Read the input
N = int(input())
cards = list(map(int, input().split()))

# Calculate and print the minimum number of operations required
print(min_operations(N, cards))