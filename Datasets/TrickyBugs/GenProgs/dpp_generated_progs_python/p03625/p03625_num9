from collections import Counter

def find_max_rectangle_area(N, sticks):
    # Count the occurrences of each stick length
    count = Counter(sticks)
    
    # Sort the stick lengths in non-increasing order
    sorted_lengths = sorted(count.keys(), reverse=True)
    
    max_area = 0
    
    # Iterate through all possible pairs of distinct stick lengths
    for i in range(len(sorted_lengths) - 1):
        for j in range(i + 1, len(sorted_lengths)):
            # Check if there are at least two sticks of each length
            if count[sorted_lengths[i]] >= 2 and count[sorted_lengths[j]] >= 2:
                # Calculate the area of the rectangle
                area = sorted_lengths[i] * sorted_lengths[j]
                max_area = max(max_area, area)
    
    return max_area

# Read the input
N = int(input())
sticks = list(map(int, input().split()))

# Find the maximum possible area of the rectangle
max_area = find_max_rectangle_area(N, sticks)

# Print the result
print(max_area)