# approach:
# To solve the problem, we need to count the occurrences of string "t" in "s"
# We loop through each character of string s and check if it is equal to the first character of string t
# If it is equal, we perform string matching to check if the substring starting from current index matches string t
# If it matches, we increment a counter and continue from the next index
# At the end, we return the counter if it is non-zero, else return -1

def count_occurrences(s, t):
    counter = 0
    index = 0
    while index < len(s):
        if s[index] == t[0]:
            if s[index:index+len(t)] == t:
                counter += 1
                index += len(t) - 1
        index += 1
    return counter if counter > 0 else -1

# parse input
s = input().strip()
t = input().strip()

# calculate and print the result
print(count_occurrences(s, t))