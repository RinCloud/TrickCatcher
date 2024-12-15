# Program:

def can_have_one_integer(N, A):
    odd_count = sum(1 for num in A if num % 2 != 0)
  
    if odd_count % 2 != N % 2:
        return "NO"
    elif odd_count > 0 or odd_count == N:
        return "YES"
    else:
        return "NO"

N = int(input())
A = list(map(int, input().split()))

result = can_have_one_integer(N, A)
print(result)