import math

def count_number_of_pairs(K):
    # Number of odd numbers between 1 and K (inclusive)
    num_odd = math.ceil(K / 2)
    # Number of even numbers between 1 and K (inclusive)
    num_even = K // 2

    # Total number of ways to choose a pair of an even number and an odd number
    total_ways = num_odd * num_even

    return total_ways

K = int(input())
result = count_number_of_pairs(K)
print(result)