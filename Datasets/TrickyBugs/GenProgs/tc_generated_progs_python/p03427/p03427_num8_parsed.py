**REPAIRED CODE**:

``` python
N = input()
if len(N) > 1:
    first_digit = int(N[0]) - 1
    remaining_digits_sum = 9 * (len(N) - 1)
    last_digit_sum = int(N[-1]) // 9
    print(first_digit + remaining_digits_sum + last_digit_sum)
else:
    print(int(N))
```