def replace_operations(S, T, q, queries):
    def replace_string(s):
        new_s = ""
        for char in s:
            if char == "A":
                new_s += "BB"
            elif char == "B":
                new_s += "AA"
        return new_s

    def delete_substring(s, sub):
        return s.replace(sub, "")

    for query in queries:
        a, b, c, d = query
        substring_s = S[a-1:b] # 0-based indexing in Python, so subtract 1
        substring_t = T[c-1:d] # 0-based indexing in Python, so subtract 1
        substring_s_replaced = replace_string(substring_s)
        substring_t_replaced = replace_string(substring_t)
        substring_s_deleted = delete_substring(substring_s, "AAA")
        substring_t_deleted = delete_substring(substring_t, "AAA")
        
        if substring_s_replaced == substring_t_replaced or substring_s_deleted == substring_t_deleted:
            print("YES")
        else:
            print("NO")


# Read input
S = input()
T = input()
q = int(input())
queries = []
for _ in range(q):
    queries.append(list(map(int, input().split())))

replace_operations(S, T, q, queries)