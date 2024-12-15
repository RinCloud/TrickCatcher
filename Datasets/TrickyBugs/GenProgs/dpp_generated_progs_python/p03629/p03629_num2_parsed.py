from heapq import heappop, heappush

def find_shortest_string(a):
    # Create a set of subsequences of string A
    subseq_set = set()
    for char in a:
        subseq_set.add(char)
        subseq_set |= {seq + char for seq in subseq_set}

    # Generate all possible strings consisting of lowercase English letters
    letters = "abcdefghijklmnopqrstuvwxyz"
    max_length = len(a) + 1
    heap = [(1, letter) for letter in letters]
    while heap:
        length, string = heappop(heap)
        if length > max_length:
            break
        if string not in subseq_set:
            return string
        for letter in letters:
            heappush(heap, (length + 1, string + letter))

    return ''

# Read the input
a = input().strip()

# Find the lexicographically smallest string among the shortest strings
result = find_shortest_string(a)

# Print the result
print(result)