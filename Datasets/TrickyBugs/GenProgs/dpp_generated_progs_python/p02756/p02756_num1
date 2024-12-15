# Getting Input
S = input()
Q = int(input())

# Initializing Variables
start = ""
end = ""

# Processing Queries
for _ in range(Q):
    query = input().split()
    if query[0] == "1":
        start, end = end, start  # Reverse the string
    else:
        t = int(query[1])
        c = query[2]
        if t == 1:
            start = c + start  # Add character to the beginning of the string
        else:
            end = end + c  # Add character to the end of the string

# Final String
result = start + S + end
print(result)