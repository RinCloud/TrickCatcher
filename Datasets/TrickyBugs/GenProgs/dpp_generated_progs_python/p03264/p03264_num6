import math

def find_number_of_ways(K):
    if K % 2 == 0:
        return math.floor(K/2) ** 2
    else:
        return math.floor((K-1)/2) * math.ceil((K+1)/2)

K = int(input())
print(find_number_of_ways(K))