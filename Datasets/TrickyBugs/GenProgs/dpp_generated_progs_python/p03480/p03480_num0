def find_maximum_k(s):
    n = len(s)
    max_k = 0

    for k in range(n, 0, -1):
        changed_s = list(s)
        for i in range(len(changed_s)):
            if changed_s[i] == '1' and i + k - 1 < len(changed_s):
                for j in range(i, i + k):
                    changed_s[j] = '0' if changed_s[j] == '1' else '1'
        if all(bit == '0' for bit in changed_s):
            max_k = k
            break

    return max_k


s = input().strip()
print(find_maximum_k(s))