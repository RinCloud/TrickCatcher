# Program

def can_pay_exact_amount(N, A):
    if (N-A) % 500 == 0 or N % 500 == 0:
        return "Yes"
    else:
        return "No"

# Get inputs
N = int(input())
A = int(input())

# Call function and print result
result = can_pay_exact_amount(N, A)
print(result)