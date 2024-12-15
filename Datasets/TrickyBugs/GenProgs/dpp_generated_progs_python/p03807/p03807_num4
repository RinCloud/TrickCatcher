# Program

def possible_to_have_one_integer(N, A):
    odd_count = 0
    even_count = 0
    
    # Count the number of odd and even integers
    for num in A:
        if num % 2 == 0:
            even_count += 1
        else:
            odd_count += 1
    
    # If there are more odd integers, it's not possible to have only one integer on the blackboard
    if odd_count > even_count:
        return "NO"
    else:
        return "YES"

# Read input
N = int(input())
A = list(map(int, input().split()))

# Call the function and print the result
print(possible_to_have_one_integer(N, A))