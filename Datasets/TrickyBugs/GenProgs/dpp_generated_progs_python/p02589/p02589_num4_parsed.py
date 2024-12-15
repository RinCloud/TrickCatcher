from collections import defaultdict

def count_string_pairs(N, strings):
    # Create a dictionary to store the frequency count of the first two characters of each string
    freq_count = defaultdict(int)
    
    # Iterate through each string
    for string in strings:
        # Check if the string has at least two characters
        if len(string) >= 2:
            # Increment the frequency count of the first two characters
            freq_count[string[:2]] += 1
    
    # Calculate the number of pairs where Limak can obtain one string from the other
    count = 0
    for freq in freq_count.values():
        count += freq * (freq - 1) // 2
    
    return count


# Read the input
N = int(input())
strings = []
for _ in range(N):
    string = input()
    strings.append(string)

# Call the function and print the output
print(count_string_pairs(N, strings))
