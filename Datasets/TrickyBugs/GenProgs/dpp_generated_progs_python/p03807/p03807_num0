# PROGRAM:

def is_possible(n, a):
    count_odd = 0
    count_even = 0
    for num in a:
        if num % 2 == 0:
            count_even += 1
        else:
            count_odd += 1
            
    if count_odd % 2 == 0 and count_even % 2 == 0:
        return "YES"
    elif count_odd % 2 == 1 and count_even % 2 == 1:
        if count_odd > 1:
            return "YES"
    return "NO"

if __name__ == "__main__":
    n = int(input())
    a = list(map(int, input().split()))
    result = is_possible(n, a)
    print(result)