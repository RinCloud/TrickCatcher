import sys

def find_maximum_sum(n):
    def digit_sum(num):
        sum = 0
        while num > 0:
            sum += num % 10
            num //= 10
        return sum

    m = str(n)
    max_sum = sum(int(d) for d in m)

    for i in range(len(m) - 1):
        if m[i] != '9':
            new_num = int(m[:i] + str(int(m[i]) - 1) + '9' * (len(m) - i - 1))
            max_sum = max(max_sum, digit_sum(new_num))
    
    return max_sum

# Read input from standard input
n = int(sys.stdin.readline().strip())

# Call the function and print the result
print(find_maximum_sum(n))