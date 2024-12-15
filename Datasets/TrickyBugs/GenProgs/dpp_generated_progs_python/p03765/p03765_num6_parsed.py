def count_sequence(s: str) -> int:
    count = 0
    current = ''
    for char in s:
        if char == current:
            count += 1
        else:
            current = char
    return count

def can_transform(s: str, t: str, a: int, b: int, c: int, d: int) -> bool:
    s_substring = s[a-1:b]
    t_substring = t[c-1:d]
    
    s_count = count_sequence(s_substring)
    t_count = count_sequence(t_substring)
    
    return s_count >= t_count and (s_count-t_count) % 2 == 0

s = input()
t = input()
q = int(input())

for _ in range(q):
    a, b, c, d = map(int, input().split())
    result = "YES" if can_transform(s, t, a, b, c, d) else "NO"
    print(result)
