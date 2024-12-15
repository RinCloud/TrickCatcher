def is_multiple_of_9(N):
    digits_sum = sum(map(int, str(N)))
    if digits_sum % 9 == 0:
        return 'Yes'
    else:
        return 'No'


N = int(input())
result = is_multiple_of_9(N)
print(result)