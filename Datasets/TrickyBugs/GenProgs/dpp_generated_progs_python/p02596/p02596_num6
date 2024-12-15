# Program to find the position of the first occurrence of a multiple of K in the sequence 7, 77, 777, ...

def find_position(K):
    number = 7
    position = 1
    
    while True:
        if number % K == 0:
            return position
        number = number * 10 + 7
        position += 1
        
        if number >= K * 10:
            return -1

# Get input from user
K = int(input())

# Call the function and print the result
print(find_position(K))