# getting input values
n, q = map(int, input().split())
s = input()

# function to count number of occurrences of "AC" in a substring
def count_AC(substr):
    count = 0
    for i in range(len(substr)-1):
        if substr[i:i+2] == "AC":
            count += 1
    return count

# processing queries and printing the results
for _ in range(q):
    l, r = map(int, input().split())
    substr = s[l-1:r]
    result = count_AC(substr)
    print(result)