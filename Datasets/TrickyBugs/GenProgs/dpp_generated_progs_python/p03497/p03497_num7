# Python Program to Find Minimum Number of Balls to Rewrite

def find_minimum_balls(n, k, a):
    # Count the frequency of each integer
    freq = {}
    for num in a:
        if num in freq:
            freq[num] += 1
        else:
            freq[num] = 1
    
    # Sort the frequencies in descending order
    sorted_freq = sorted(freq.values(), reverse=True)
    
    # Calculate the number of balls that need to be rewritten
    min_balls = n - sum(sorted_freq[:k])
    
    return min_balls

# Get inputs from user
n, k = map(int, input().split())
a = list(map(int, input().split()))

# Find the minimum number of balls to rewrite
min_balls = find_minimum_balls(n, k, a)

# Print the result
print(min_balls)