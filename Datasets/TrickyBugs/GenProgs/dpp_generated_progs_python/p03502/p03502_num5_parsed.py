"""
N = int(input())

def is_harshad_number(n):
    sum_of_digits = sum(int(digit) for digit in str(n))
    
    if n % sum_of_digits == 0:
        return "Yes"
    else:
        return "No"
    
print(is_harshad_number(N))
"""