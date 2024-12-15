# Takahashi Procedure

def takahashi_procedure(s, queries):
    for query in queries:
        if query[0] == 1:  # Reverse the string
            s = s[::-1]
        elif query[0] == 2:  # Add character to beginning or end of the string
            f, c = query[1], query[2]
            if f == 1:
                s = c + s
            elif f == 2:
                s = s + c
    return s


# Read inputs
s = input()
q = int(input())
queries = []
for _ in range(q):
    query = list(map(int, input().split()))
    queries.append(query)

# Perform Takahashi Procedure
result = takahashi_procedure(s, queries)

# Print the resulting string
print(result)