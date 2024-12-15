X, A, B = map(int, input().split())

if B <= A:
    result = "delicious"
elif B - A <= X:
    result = "safe"
else:
    result = "dangerous"

print(result)