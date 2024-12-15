def even_odd_palindrome(n):
    even_count = 0
    odd_count = 0
    for num in range(1, n+1):
        if str(num) == str(num)[::-1]:
            if num % 2 == 0:
                even_count += 1
            else:
                odd_count += 1
    return (even_count, odd_count)